using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Combos {
    public struct ComboHitBox {
        public float radius;

        public float pos0HeightFactor;
        public float pos0ForwardFactor;

        public float pos1HeightFactor;
        public float pos1ForwardFactor;

        public ComboHitBox(float radius, float pos0HeightFactor, float pos0ForwardFactor, float pos1HeightFactor, float pos1ForwardFactor) {
            this.radius = radius;
            this.pos0HeightFactor = pos0HeightFactor;
            this.pos0ForwardFactor = pos0ForwardFactor;
            this.pos1HeightFactor = pos1HeightFactor;
            this.pos1ForwardFactor = pos1ForwardFactor;
        }
    }
}
