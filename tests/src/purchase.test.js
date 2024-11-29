import { processTest, populateTransaction } from "./test.fixture";

const contractName = "MinterDAExpV1";

const testLabel = "Purchase"; // <= Name of the test
const testDirSuffix = "purchase"; // <= directory to compare device snapshots to
const signedPlugin = false;
const testNetwork= "ethereum";

const contractAddr = "0xd94c7060808f3c876824e57e685702f3834d2e13";
const chainID = 1;

const selector = "0xefef39a1";
const projectId = "00000000000000000000000000000000000000000000000000000000000000c9";

const inputData = selector + projectId;
const value = "12.0";

// Create serializedTx and remove the "0x" prefix
const serializedTx = populateTransaction(contractAddr, inputData, chainID, value);


const devices = [
  {
    name: "nanos",
    label: "Nano S",
    steps: 4, // <= Define the number of steps for this test case and this device
  },
  {
    name: "nanox",
    label: "Nano X",
    steps: 4, // <= Define the number of steps for this test case and this device
  },
  {
    name: "nanosp",
    label: "Nano S+",
    steps: 4, // <= Define the number of steps for this test case and this device
  },

];

devices.forEach((device) =>{
  processTest(device, contractName, testLabel, testDirSuffix, "", signedPlugin, serializedTx, testNetwork);
});
