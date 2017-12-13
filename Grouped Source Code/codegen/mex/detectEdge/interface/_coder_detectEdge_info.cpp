/*
 * _coder_detectEdge_info.cpp
 *
 * Code generation for function '_coder_detectEdge_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectEdge.h"
#include "_coder_detectEdge_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties()
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
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("detectEdge"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("9.0.0.341360 (R2016a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo()
{
  const mxArray *nameCaptureInfo;
  const char * data[21] = {
    "789ced5dcd6fdc44149fd03614a4f2a5d252a0900809014d633e2454714ac98712c857dba4049a6ae3ac6793a1f6ccd6f6862d5c2c90508f082101379038e4ca"
    "8dff0071e004e582840477ee1cf1ecdafb31f1eeccfa2bdef4adb44a5f77def8bd79efe7f7decc788c46169690ff79c4ff6efd8cd0a8fff7a4ff7d00353f2702",
    "7ac4ff5e0efe36ffff383a15d09ffadf32a32eaebbcd1fa96e61147e0c6611aa5377ed4e15231b3bccdcc346e3970a31f11ab1f022eb20e6894f58731d3fb508"
    "fe93bdebb47a466627d1fc703df6515b8fe3117a381d7a3c16d037666f4ebfa5ad3bd876b415b3f6113371e91d6a6b33d8b9e5b2aab64ec99eff1b71ef8cb1ca",
    "d822c686a32de9848eaddaec435c76b5e06f69e9f2daa2beedffe64e33bab78cddb18b632b559758e4636c680676fd46b3c60e9eb45af25e92c87b529097d396"
    "6d903d626015fe51817fb46195dab6899bd7f724fcef08fc9cbeb1b0b8d118325fef1d5bb7c6b891fc21f1b5bffcb676f5f5575f7b53d75cc6cc6d56d7b0656a",
    "26d9d62cdd35fdb16155470be59facb6edd6a9c768841c231d723c14fcbfff99d8fceedee504fc49af7f7eee5c3ad77fa9837f24821f75fc8dd3de43c5b37394"
    "1c0f0a72703ae846893fa9bf2f08fc0b298c43380c56873de2f98b77f6e12b87eaefa9f11fb6bfe765e755891ccf0b7270bacc0c6c4f123fa8da54372789f376",
    "8d98ee025dae59d826e554707057c2bf21f06fc4191ffebdd0d046bb10aaa389ea4c5a09fce9d213bffe0e785068efa1e1c0c3982007a7053c3865ddc4f5ea34"
    "b3aaba4b7c8f4e030f5f48f8df17f8df8f333e917838a04e0a71029d4d2b2f396cfefb0517f312399e10e4e0b4800bbfd7e871cf224f7a57e07f37ceb844e2c1",
    "57a3477d34409ef428e4496aedf7517f3b17ad5e7e5522eff12e798f23e7b6eda68187ba847f5ee0e77492fb04362b35aa71e913e54717675e041ca8b43f6cfb"
    "caf2a26785eb73fa409d30c32c1f66b3b6cdec50af2949bf8f0afd72da97acec12464bbb3a354cac542fac0bfdacc7199f1ef542875a8d3b41027f9a7b0ff030",
    "147890e543a785eb735ac003eec4c1a071a3bcabdb2a79d09220c7529c7188f47b9c82bf7bfa1a067f1f067f97ddff9f16aecfe988ba58b727799f6dbdfaf97d"
    "f8e9ec37e493ddefd704beb538e311e9f7179a7a046313ca13d3ffcf401d3c1cfebf25b9fecbc2f5392df8bf5ead9a77ae359c672ec86016e8aaa997c3f5c834",
    "f3a16f24fd6c0bfd6cc719af487cf456339c5048e06f7ffdf306e045a57dd1ed9f553cc97add01e2cad1c2c93eea6fefa2cd2fc5f16f0b1b44a7f9ccbb2e0afc"
    "9c4e12870dddd579246eea901417e8dfe90f01172aed3d540c3bcf4be4784a9083d3429ca0babd436879f756927a43b6feb629f06d0e3a1e8e5fd0fba06f4685",
    "20368821a2a549e2f8706ce22aac4babb41f06bb47c97542908bd3159335269c86719f52b31e6b6890c6fa33ac3b28b6f75031ec0cfb94609f12e0a12d870c0f"
    "cf0872703aba7e0ea342b6f3b1d9adbf8575737b8ca06ebe7f70b0259103e665615eb648b829bafdb38a2b59e759105f8e164e3cd4dfde79cd3f41dd017507e0",
    "417dde29eaf938e2e0db35dd1c9e7ddf5d79a7ff0f2dd020f9beefda1f13bf81bf2bb4f75031ec3c2591e331410efef5bb2e053d95cacccee5f99f9b02ffcd60"
    "3c56930d48d5267bba8b3551a5a4fb5cbfbcb70279904afba2da7d5e2217accbc58a0fb02ea7d8de43fded9e573eb42191e305410e4e0b382833eab8cb8c5e23",
    "74c7c42ea33324d97e8f41e246627cf4ac13a2d4827d4d21fffd820f599c382bc8c1e9c8f9a4d99d5cea8755817f35ceb8f47c8e9aab91a85efeea4fc89b52f1"
    "ffbcec3c2591e3942007a789439b532b2e3f962a9ffd1a2b02ff4a9cf1e0f7830aa963a3cafce1d0baf4f06f0909fce61cdcf787cbef65fe7a529083d3c4a910",
    "3f9cece6e1efa99d27d5e5ef4df953584f037f576c7f17f5b77376f3e06d7f1faf10db712b4456c78ea083cf71729f49c3df65cf47cd09fc7371c621c2dfb9af"
    "839f1ffef36f59db774a727dd53c26abe79c217f391a7eeea1fe762e4addaa70de11e5cfdc84fd65e5f7d99d7344c3e148e23777bf5f84f9cca3e4f70af33555",
    "9b190ef9389ff350b3ab67423512cdd77c727a16fc7f98fc5fb6dfe7bc2007a705ffaf397855b72bcc9ee633e028d9fd5f56df5c17e4b91e675c22fdbf5b8d64"
    "79bef7c38faf40fea3d2be68f696c5038575de56c749d67965e37245e0bb92feb8a4713ef6df5f7f0638384af1e039410e4e37364d50b7e4fb8cc958b5c4f6b0",
    "5d31d947a5f22e2edf92c783f0138503d97aee96c0b795705c0258f4d127497ee43d0375b15afb9f507fbb7f8ebaedcee9aced3edebf4169179b556cc7cb7fc2"
    "79d114ea11420d5c5fa06e21e6d160fe0870d20f2771ea65bf6b4baf673bcf94f6fb5782fdb60dc953582f8338a2d8fe7ec507a1c38a0f42011f6dfeacf121cb",
    "af5379cf469fba637c0f975d66874776b5e492e541b01e01eb11800384ce0872715adc4fca6c77c1a80fd1bebae8fd274d3592ad4be36f67202ea8b4f75031ec"
    "2cf37f589f1bc87f607d4eb1bd878ae1ffb03e07eb7345ce8b3e40ddf6e674ca3818b7b0bd834b9c6ecb05eb14b04e01f8e88d0f59def4a42017a723ea86c5d9",
    "083b6491372d0bfccba98ed3e26cc2f508787fa762fb6f507f3b1ba8dbce9c4ed7ce8dd9554e9474a78ca941e84e897ba11a2e14de6365639355c3fea624fda9"
    "9e93e749fac9eebd560d75929e6f01f8506c5f747cc8eef32704f9384d9ce6546b1e7122fd73369be7e0b4675b61dda108f5755e7696d51170de1d9c77077544",
    "6fb91e17e4e2340f30964b2cecb496b25bfd65b51ff69ac0772dcef808ef853fa047f2f3f09e85f8904e9ea4a36e7b733a037b8f979965f9997a6346c5e9902f"
    "abb821c3dba0fbff208eb43f45e007dc40be0538397c9c1475bf07d4df507fe7e1ff79e7d307fcdfc23a6595c8f152f77b422b8afc45f57b5f03f0fb0efeacfd",
    "de43c5b033e441900715010fc316074e0af270dab20db2478c54ce9df724fc693ff7c0eba750fec96adb2e31fd6662f3bb438d03e7d38a4359fbfd3eea6fe7a2"
    "bd075db65fef5897bcc7107f406e18f3a2d6fda1fd985c127fdcfc6f1bf2a222e645bdec3c2f9143e1fc0d78cf42f0ff1deb0ef09e05c5f61e1a0e1c28ac0358",
    "84aed84b411cc8eaf9b7ec9e7708c54f5407fcb264c0fd3f0dbfcfcbce70ff87fbff61e24066f75eef9f4a13078d1d7ab8eedad8aac1fba70017808bdeb8d890"
    "c805efa382f751015ed4e308bc9f6a207f82f75329b63fc27880f30550cb9fe07c01c5f645c5039c3700e70d002e06c7059c3700e70de4818f5cf6770f828f92",
    "53dbee317eb07f75603f021c28b62f3a0e205e40bc009cc871322f910fcee388e55f701e8742fbff01f69b074b",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 51056U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_detectEdge_info.cpp) */
