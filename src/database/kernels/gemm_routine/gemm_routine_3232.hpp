
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Gemm_Routine3232' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry GemmRoutineComplexSingle = {
  "GemmRoutine", Precision::kComplexSingle, {"XGEMM_MIN_INDIRECT_SIZE"}, {
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "default", {
          { Name{"Intel(R) Core(TM) i5-4590S CPU @ 3.00GHz          "}, Params{ 1984, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz          "}, Params{ 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i7-6700K CPU @ 4.00GHz          "}, Params{ 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Xeon(R) CPU E5-2630 v3 @ 2.40GHz         "}, Params{ 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Xeon(R) CPU E5-2630 v4 @ 2.20GHz         "}, Params{ 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, "Intel", {
        { "default", {
          { Name{"Intel(R) HD Graphics IvyBridge M GT2              "}, Params{ 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) HD Graphics Skylake ULT GT2              "}, Params{ 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "SM5.0", {
          { Name{"GeForce GTX 750 Ti                                "}, Params{ 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM6.0", {
          { Name{"Tesla P100-PCIE-16GB                              "}, Params{ 1984, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 1984, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM6.1", {
          { Name{"GeForce GTX 1070 Ti                               "}, Params{ 1024, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"GeForce GTX 1080 Ti                               "}, Params{ 1408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"TITAN X (Pascal)                                  "}, Params{ 1472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 1280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "default", {
          { kDeviceNameDefault                                        , Params{ 1280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { kDeviceNameDefault                                        , Params{ 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
