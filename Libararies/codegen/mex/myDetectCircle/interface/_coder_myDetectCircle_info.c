/*
 * _coder_myDetectCircle_info.c
 *
 * Code generation for function '_coder_myDetectCircle_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "myDetectCircle.h"
#include "_coder_myDetectCircle_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("myDetectCircle"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("9.0.0.341360 (R2016a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[14] = {
    "789ced5c4d6fdc44189e903414a452542142a9808d9010a8edba80842a4e499346d9349b0d6d22a56aaa8dd79ecd0e19cf58b637d9705a71403d72e0c091637e"
    "0247ae1cb8c1098903bf822333eb75d63b71765c7f6cbce958da6edf78def1f37e3cfbce8cc70653952a60c75becf31b0460967d5f659fd7807f5ce9cb53ec33",
    "dffff6ff3e03aef5e5efd9c7a0c4831dcf3f49740b82e030a985884ebcad631b0207ba141f42b377a68930dc42165ca721611531c15a099d3a15f829a7e59ef6"
    "0c7058f00f6ec70918d8311361c751c88eb7fbf2b387cf97bed6b65de8b85a0db78f2886f535e268cbd03df0a8ad6d1374c8ce21efb8449ba575084d57abea88",
    "94361dfa2d343cadff5daf2e6eadeb0d76ce5ba2e470037aa5bba59aed210b7d074dcd3a5e861e6bb6841c03c3b2d5c37b4f82777a08ef34b0f44e4fefbe446f"
    "56b073b6178d760343df4f5d897e45d0e7f2b3cafa4ecf55ccde7d47b74a3c38cc15cceac507dae32fee7dfe95ae7994e206ed68d0c21a460dcdd23dcc7c62ea",
    "9ede6c13267698e5837885ed988dc03115c2f146ffefecd8fdaff1d7620afdb4d7cf4cffd390fe54843e087d2769df05c588f3aa04c77b020e2e1bd4844e19b1"
    "1f1787e8b84c74671f11a37520e34d7084fb0b70fc28c1b12be8edbeac3fdc96ee30b2f7b0f7ffbdddff0a2cd14e2df15d943c8fbad3771effa97810a3fd24c4",
    "3d0ad7150117979b985227a67ed1ea00c4fcd7a167411675e0eef227aa0e14b10e9c17e74d098e8f041c5c16ea00721fb411f62a64a36d41071999f0e085447f"
    "47d0df49e21ffe39f3a3209a53b652e4d3fd1b7fa87a7099f8704bc0c165810faea163dd2907550148e715c111353e92f1605bd0db4ee297481edcf6ed08f928",
    "c5b8e8dd959baa2e4c120ff624383e13707059e0816edbf8f8492f8956dac4f0102515b289750386aeb320b9ce75e13a5c6ef67babb77462b282c1fbf959d24f"
    "43e8a791c46f913c39dfccc0a129f2ee9f7fbf54bc89d3bee8f1cfabaee43dce52f5e572f1a40bc65b5f92ae3fcd0938b82cf0c142a4e654fbebafb275db99a1",
    "fe6680d1d29d38fed814706c26f14764fe07f053cd2f7eaf9a2aefb3c8fb71c55996f76add55adbb5ee4baeb73301c772e67cd837976be0e3b9e03ad7650f715"
    "2f142f142fcef2624782eb63011797055e1894b8de06254f10d9c7d0a3641959917149327fc89d2fe7fa2dcaacd47c51f38898ed8bca970ce615febcf4e1fe58",
    "eee7e537ee0ccc4835bff8e9ef9ae243b1e717c3715e90e0b826e0e03272897fabcbe3dbc2c6731fbb26e8d792f883af333451079a3665eed086ece8efe74a98"
    "3737551d98acbc97e5eb5501079791db4496eeb5c691ef6b82fe5a123f9cc9771f7f06f71954bec76cff028c8e737efb1206f93edf448eeb355192754f9e3359",
    "e47b47a2bf22e8af24f14344bef35c57799e7f9e5f747c1724d78f3b8ec9ebbe801abf5c8e3c97dd37d6c1709cb99ceb3cb6eeb61be7f82fee7e5496473a89a9"
    "9f765c93fd7e14f61fad674116fb516f291e64338e1f579cd57e54b51fb5087c287a5d90f1e443011f977977ec32f5267530a5769d1e42a789e951dd6841e320",
    "dd3e55d97af09ea0b797c45fe1df0fdf7d23ec49c393aeaa1b31dbff0a46c7fd07301c772ee71df7f9d10dea2d886de8249b1f04f3e755895e8cfb0c8898b053"
    "215e21e65b6a9ea178328a2749c64fac6bfe7874aef3f0ccd65587c7a53de419acabaa3a12b3fdabca0f4426951f88287e0cf45ff5f9886c3cf48e808fcbc278",
    "c88198da417f0b92fee23e17d495f45315faa966e6b79e39299f6b00738a1ff1da9f80d1719eb4f7cc9cf9bd87088fe3beddaaa0cfe5f4cf1772f4a9d6add47b"
    "0562b6bfe8f8aaf55bb57eab7820e7c1fbc2f5b91cfdbc27ef7360575eef11d812f4b692f863e4739ebe6f023c6a7ff6e5ceff3dc9f5d5fb03d4fb038ac497a2",
    "c73faf7a92f7b84ad595cbc59313303ade459b6727d9176e39263a44261cc7fea9acd767a9ed6a01feb23d885bc2bcbab3fbcb85f2e283ac7899372fbaa07871"
    "8ec2f1ba8083cbfd6e2672bf20f743e086f4fb05bb736f7ea3ea4016f93eae38abf526b5dea4f830c021e34349c0c1e5887902ecd84bd4b2750fb18cce820fb2",
    "fd814f05fda749fc73ee735343e664b1af5cdd978bd9be0b8ac18b55098e1b020e2e0bbc60bd46fb3d8f71d22341ff5112bf44f28199518e7effc74b8c93aeab"
    "7192bcfdfff35a4a9c", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 26064U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_myDetectCircle_info.c) */
