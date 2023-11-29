package com.rusefi.uds;

import org.junit.Test;

import static org.junit.Assert.assertEquals;

public class SeedKeyTest {

    public static final int BOOTLOADER_SECRET = 0xB24F5249;
    public static final int SECRET = 0x57649392;

    public static int Uds_Security_CalcKey(int secret, int seed, int rnd) {
        if (rnd < 220)
            rnd += 35;
        else
            rnd = 255;

        for (int i = 0; i < rnd; i++) {
            if (seed < 0)
                seed = secret ^ seed << 1;
            else
                seed <<= 1;
        }
        return seed;
    }

    @Test
    public void testAssert() {
        assertEquals(0xC42F15AE, Uds_Security_CalcKey(BOOTLOADER_SECRET, 0x5D8A2010, 0xF0));
        assertEquals(0x001B6F78, Uds_Security_CalcKey(SECRET, 0x5DA0B808, 0xA4));
    }
}
