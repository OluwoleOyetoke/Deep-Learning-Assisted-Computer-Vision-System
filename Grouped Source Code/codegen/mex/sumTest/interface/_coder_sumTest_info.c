/*
 * _coder_sumTest_info.c
 *
 * Code generation for function '_coder_sumTest_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sumTest.h"
#include "_coder_sumTest_info.h"
#include "sumTest_data.h"

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
  xInputs = emlrtCreateLogicalMatrix(1, 7);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("sumTest"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(7.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("9.0.0.341360 (R2016a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "CoverageInfo", covrtSerializeInstanceData
                (&emlrtCoverageInstance));
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[15] = {
    "789ced5cdf8fd4441c9ff3e044138410c34908bac4c4a8c0153531c4a78383f3160e6e813b720448e9b6d3db91e94c6d6797055f564d088fc618f59107ff01df"
    "fc137cf149f1c5c444ff1266b6ddbbddb9de4e69bb7bbdbb69d2ec7eb7f39d7e7f7dfafdce8f2e98a85e05fc78839fbf4300a6f8e7017ebe02a2637f4c4ff0f3",
    "64fc19fdbe0f1c8ce96ff86953c2609b451789e541d03b1cea216211b6fcc887208021c52de874afb808c365e4c145da472c204e78f37d97d60971296884eb3d"
    "03dc4f4487d0e319d8d0635f821e7e9f1e8763facea57b739f192b210c426309371f520ccdcb24302ec2f001a3beb142508b5f43ec5185ba9545089dd0b86a21",
    "52a905f40b683323fe34af9e5f5eb4eafc1a9ba3a4750db2ca99ca92cf90871e43c7089bde320cd98c27e43ca790f38024a7a0bdc0412de4c034fc5312ff54d7"
    "1bcd3a86919d3a0afecb12bfa0ef541757bba6e2faae05965711cee1a6e05a9fbf60dcf8f8ec479f5a06a314d769db801e3630aa1b9ec530b709f543a327ff8c",
    "bfe1af7e3da612e498e893e3b5f8777e9cbefbecf9f91cfc79ef7f62fe5831f77fbf8f7f22811ff47d6669df01e5f373921caf4a72083aee26157fde78af4afc"
    "d502ecd03383d7e78f6cf1d2997efdfab6c67b61fcdb1defe3f2734d21c73b921c82b6a9038319c49369402c3c83c20b4d8459955c6b7a304076213878aae05f",
    "95f857b3d8479ca7bada18a77aea18b23a9bf3e04bc4d3b9237ffca5f190a27d07ec0c3c542439042de121b42d0cdbfe1cf57c8b211ed145e0e13b05ff6d89ff"
    "7616fb24e261933a05e409305d545db2ddfc7b05170b0a398e4872085ac205ef35d9eea3a893ae48fc57b2d825110f5c8dd83239eaa443ba4e4ad7fe1918eee7",
    "b28c93cf2ae49c1c90731270e61d395e702c66b94d22942f62bcf075d5d13828631ed8cacfaa3cf0962487a0a53c40ac600d11bbf140859bded1df5f4f0e553d"
    "7457e2bbfbb2f6081b56c0411e3dfde31c20a782754d2213e5c0c1e4e91b7a9c90a6fd4ef07b925cfb25b904ed624a8394fc65cb03108ba743578322c603672e",
    "bea7f34019f3c0567ed6f3467ade48e361430e151e8e4b72083a61dec80a667a5921ea376b7da4c2c18ac4b792c52e89383815e9d167a31c75d1513d4fb4b370"
    "705f21c707921c82967060f93e7e74b31b44f34d6233444995d4b065c3befbcc2aee7348ba8fa0ddb837b361110747eb753f2bfaa94bfdd4b3d82d11275babd9",
    "33688eb8fbf7ff4f346ed2b42fbbff479557465d67e9fcb2bb70d201e3cd2f69e619d3eecfe07df8017594f5d444fcdb06ff3e6037ac204dbcdf92ee7b2bd6bf"
    "96d7007e805a168346ac8430468e787fbaa4e75b53b52f9bbff5785b8fb7352e36e3624121cf51491e41737e1b86a119776522e23759a81e6f0fcb0faa3a124a",
    "72c0a2ed92ac54defae8c98f48e78b22c611dbed7f154ef4ba5d267ce875bb94edcb8e8f55857cef4af2095ac2874d49c8ae51721391350c19251751f23ea151"
    "ecffcb8d9b2debac24b572e3468fbb53b62f3b6e5479655a924fd089f35397d6c6b20e5e93f86ba0c87db2428d5ce3901ffe59d2b848d3be03cae1e759851c07",
    "2539048d42120d599978dd703cfb3f9624fea52cf6108f0917b5a1e3536e0e63408f99cdfb195f226e8ee97cb0b3e23ecb7ba1287411cf328d71c47b61ef0b0e"
    "c47b247f01eb733ade53b67f0a86fb7974f38b1bf17ed24541c85c94657e48c44c11f1de56f0cf4bfcf359ec9010eff9d61b749ca76dbfddfe9d55dc3f6d1d93",
    "75feb4a3e0d3f5cbee8873d5f37c3bd751d3ae27a3107ed9b4f058eaf642de631bd8b7c5bf18b106f9df636bfe7dfa4f1df729da774039fc3cab90e3b0244777"
    "4ec9c366dc9369d3602cef33df93f8ef819ccf81c820bda780ac52ce7532f0fd733d6f93aa7d59fdbea0904baf8f65ca0f7a7d2c65fbb2d5452a3c24cfeb7b75",
    "44a0d98236a3810931f42061e158f76bbb523f6ed176da42c99cfbf2263ed7fbf252b52fbbffb3e166208f081886e8f178fe4f6c74f3c53d3572ad877df5e625"
    "9d3f76032e54fb574f48f2095ac2453384352b706930277624807cf34d59f36d7e5c0caa91336ffcf2eb873a6f8cb2be1a95bf0b186fac779c67bca1b2cb7589",
    "ef7af17629e27f64fefbe95b8d83bd9027de96e4137477504f98c9630953ea9bb4050317d387a6dd80f603759ee81d59c6e3f725befb20e7bc5d049721fae4a9"
    "a73ac7f53a45baf6bf81e17e7f0206fd2ee851fbfde4f0066603621f06d9eaa2de3a7501e317441cd8ae12568a754dbd9ea771320c2759c6d7bc6bcf6a8f76bd",
    "bbe8ff3b8fd783ba9217b07f49e79194edf72a3e10d9a9f84044e363837f94f878018b706f25",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 26072U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_sumTest_info.c) */
