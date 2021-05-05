/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

#include <cinttypes>
#include <cstdint>

#include "af-structs.h"
#include "app/util/util.h"
#include "call-command-handler.h"
#include "callback.h"
#include "cluster-id.h"
#include "command-id.h"

#include <app/InteractionModelEngine.h>

// Currently we need some work to keep compatible with ember lib.
#include <util/ember-compatibility-functions.h>

namespace chip {
namespace app {

// Cluster specific command parsing

namespace clusters {

namespace LevelControl {

void DispatchServerCommand(app::Command * command, CommandId commandId, EndpointId endpointId, TLV::TLVReader & dataTlv)
{
    {
        switch (commandId)
        {
        case ZCL_MOVE_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            uint8_t moveMode;
            uint8_t rate;
            uint8_t optionMask;
            uint8_t optionOverride;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0:
                    TLVError = dataTlv.Get(moveMode);
                    break;
                case 1:
                    TLVError = dataTlv.Get(rate);
                    break;
                case 2:
                    TLVError = dataTlv.Get(optionMask);
                    break;
                case 3:
                    TLVError = dataTlv.Get(optionOverride);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfLevelControlClusterMoveCallback(moveMode, rate, optionMask, optionOverride);
            break;
        }
        case ZCL_MOVE_TO_LEVEL_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            uint8_t level;
            uint16_t transitionTime;
            uint8_t optionMask;
            uint8_t optionOverride;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0:
                    TLVError = dataTlv.Get(level);
                    break;
                case 1:
                    TLVError = dataTlv.Get(transitionTime);
                    break;
                case 2:
                    TLVError = dataTlv.Get(optionMask);
                    break;
                case 3:
                    TLVError = dataTlv.Get(optionOverride);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfLevelControlClusterMoveToLevelCallback(level, transitionTime, optionMask, optionOverride);
            break;
        }
        case ZCL_MOVE_TO_LEVEL_WITH_ON_OFF_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            uint8_t level;
            uint16_t transitionTime;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0:
                    TLVError = dataTlv.Get(level);
                    break;
                case 1:
                    TLVError = dataTlv.Get(transitionTime);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfLevelControlClusterMoveToLevelWithOnOffCallback(level, transitionTime);
            break;
        }
        case ZCL_MOVE_WITH_ON_OFF_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            uint8_t moveMode;
            uint8_t rate;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0:
                    TLVError = dataTlv.Get(moveMode);
                    break;
                case 1:
                    TLVError = dataTlv.Get(rate);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfLevelControlClusterMoveWithOnOffCallback(moveMode, rate);
            break;
        }
        case ZCL_STEP_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            uint8_t stepMode;
            uint8_t stepSize;
            uint16_t transitionTime;
            uint8_t optionMask;
            uint8_t optionOverride;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0:
                    TLVError = dataTlv.Get(stepMode);
                    break;
                case 1:
                    TLVError = dataTlv.Get(stepSize);
                    break;
                case 2:
                    TLVError = dataTlv.Get(transitionTime);
                    break;
                case 3:
                    TLVError = dataTlv.Get(optionMask);
                    break;
                case 4:
                    TLVError = dataTlv.Get(optionOverride);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfLevelControlClusterStepCallback(stepMode, stepSize, transitionTime, optionMask, optionOverride);
            break;
        }
        case ZCL_STEP_WITH_ON_OFF_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            uint8_t stepMode;
            uint8_t stepSize;
            uint16_t transitionTime;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0:
                    TLVError = dataTlv.Get(stepMode);
                    break;
                case 1:
                    TLVError = dataTlv.Get(stepSize);
                    break;
                case 2:
                    TLVError = dataTlv.Get(transitionTime);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfLevelControlClusterStepWithOnOffCallback(stepMode, stepSize, transitionTime);
            break;
        }
        case ZCL_STOP_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            uint8_t optionMask;
            uint8_t optionOverride;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0:
                    TLVError = dataTlv.Get(optionMask);
                    break;
                case 1:
                    TLVError = dataTlv.Get(optionOverride);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfLevelControlClusterStopCallback(optionMask, optionOverride);
            break;
        }
        case ZCL_STOP_WITH_ON_OFF_COMMAND_ID: {
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfLevelControlClusterStopWithOnOffCallback();
            break;
        }
        default: {
            // Unrecognized command ID, error status will apply.
            // TODO: Encode response for command not found
            ChipLogError(Zcl, "Unknown command %" PRIx16 " for cluster %" PRIx16, commandId, ZCL_LEVEL_CONTROL_CLUSTER_ID);
            break;
        }
        }
    }
}

} // namespace LevelControl

namespace NetworkCommissioning {

void DispatchServerCommand(app::Command * command, CommandId commandId, EndpointId endpointId, TLV::TLVReader & dataTlv)
{
    {
        switch (commandId)
        {
        case ZCL_ADD_THREAD_NETWORK_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            chip::ByteSpan operationalDataset;
            uint64_t breadcrumb;
            uint32_t timeoutMs;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0: {
                    const uint8_t * data = nullptr;
                    TLVError             = dataTlv.GetDataPtr(data);
                    operationalDataset   = chip::ByteSpan(data, dataTlv.GetLength());
                }
                break;
                case 1:
                    TLVError = dataTlv.Get(breadcrumb);
                    break;
                case 2:
                    TLVError = dataTlv.Get(timeoutMs);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfNetworkCommissioningClusterAddThreadNetworkCallback(operationalDataset, breadcrumb, timeoutMs);
            break;
        }
        case ZCL_ADD_WI_FI_NETWORK_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            chip::ByteSpan ssid;
            chip::ByteSpan credentials;
            uint64_t breadcrumb;
            uint32_t timeoutMs;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0: {
                    const uint8_t * data = nullptr;
                    TLVError             = dataTlv.GetDataPtr(data);
                    ssid                 = chip::ByteSpan(data, dataTlv.GetLength());
                }
                break;
                case 1: {
                    const uint8_t * data = nullptr;
                    TLVError             = dataTlv.GetDataPtr(data);
                    credentials          = chip::ByteSpan(data, dataTlv.GetLength());
                }
                break;
                case 2:
                    TLVError = dataTlv.Get(breadcrumb);
                    break;
                case 3:
                    TLVError = dataTlv.Get(timeoutMs);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfNetworkCommissioningClusterAddWiFiNetworkCallback(ssid, credentials, breadcrumb, timeoutMs);
            break;
        }
        case ZCL_DISABLE_NETWORK_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            chip::ByteSpan networkID;
            uint64_t breadcrumb;
            uint32_t timeoutMs;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0: {
                    const uint8_t * data = nullptr;
                    TLVError             = dataTlv.GetDataPtr(data);
                    networkID            = chip::ByteSpan(data, dataTlv.GetLength());
                }
                break;
                case 1:
                    TLVError = dataTlv.Get(breadcrumb);
                    break;
                case 2:
                    TLVError = dataTlv.Get(timeoutMs);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfNetworkCommissioningClusterDisableNetworkCallback(networkID, breadcrumb, timeoutMs);
            break;
        }
        case ZCL_ENABLE_NETWORK_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            chip::ByteSpan networkID;
            uint64_t breadcrumb;
            uint32_t timeoutMs;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0: {
                    const uint8_t * data = nullptr;
                    TLVError             = dataTlv.GetDataPtr(data);
                    networkID            = chip::ByteSpan(data, dataTlv.GetLength());
                }
                break;
                case 1:
                    TLVError = dataTlv.Get(breadcrumb);
                    break;
                case 2:
                    TLVError = dataTlv.Get(timeoutMs);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfNetworkCommissioningClusterEnableNetworkCallback(networkID, breadcrumb, timeoutMs);
            break;
        }
        case ZCL_GET_LAST_NETWORK_COMMISSIONING_RESULT_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            uint32_t timeoutMs;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0:
                    TLVError = dataTlv.Get(timeoutMs);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfNetworkCommissioningClusterGetLastNetworkCommissioningResultCallback(timeoutMs);
            break;
        }
        case ZCL_REMOVE_NETWORK_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            chip::ByteSpan NetworkID;
            uint64_t Breadcrumb;
            uint32_t TimeoutMs;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0: {
                    const uint8_t * data = nullptr;
                    TLVError             = dataTlv.GetDataPtr(data);
                    NetworkID            = chip::ByteSpan(data, dataTlv.GetLength());
                }
                break;
                case 1:
                    TLVError = dataTlv.Get(Breadcrumb);
                    break;
                case 2:
                    TLVError = dataTlv.Get(TimeoutMs);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfNetworkCommissioningClusterRemoveNetworkCallback(NetworkID, Breadcrumb, TimeoutMs);
            break;
        }
        case ZCL_SCAN_NETWORKS_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            chip::ByteSpan ssid;
            uint64_t breadcrumb;
            uint32_t timeoutMs;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0: {
                    const uint8_t * data = nullptr;
                    TLVError             = dataTlv.GetDataPtr(data);
                    ssid                 = chip::ByteSpan(data, dataTlv.GetLength());
                }
                break;
                case 1:
                    TLVError = dataTlv.Get(breadcrumb);
                    break;
                case 2:
                    TLVError = dataTlv.Get(timeoutMs);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfNetworkCommissioningClusterScanNetworksCallback(ssid, breadcrumb, timeoutMs);
            break;
        }
        case ZCL_UPDATE_THREAD_NETWORK_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            chip::ByteSpan operationalDataset;
            uint64_t breadcrumb;
            uint32_t timeoutMs;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0: {
                    const uint8_t * data = nullptr;
                    TLVError             = dataTlv.GetDataPtr(data);
                    operationalDataset   = chip::ByteSpan(data, dataTlv.GetLength());
                }
                break;
                case 1:
                    TLVError = dataTlv.Get(breadcrumb);
                    break;
                case 2:
                    TLVError = dataTlv.Get(timeoutMs);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfNetworkCommissioningClusterUpdateThreadNetworkCallback(operationalDataset, breadcrumb, timeoutMs);
            break;
        }
        case ZCL_UPDATE_WI_FI_NETWORK_COMMAND_ID: {
            CHIP_ERROR TLVError = CHIP_NO_ERROR;
            chip::ByteSpan ssid;
            chip::ByteSpan credentials;
            uint64_t breadcrumb;
            uint32_t timeoutMs;

            while ((TLVError = dataTlv.Next()) == CHIP_NO_ERROR)
            {
                switch (TLV::TagNumFromTag(dataTlv.GetTag()))
                {
                case 0: {
                    const uint8_t * data = nullptr;
                    TLVError             = dataTlv.GetDataPtr(data);
                    ssid                 = chip::ByteSpan(data, dataTlv.GetLength());
                }
                break;
                case 1: {
                    const uint8_t * data = nullptr;
                    TLVError             = dataTlv.GetDataPtr(data);
                    credentials          = chip::ByteSpan(data, dataTlv.GetLength());
                }
                break;
                case 2:
                    TLVError = dataTlv.Get(breadcrumb);
                    break;
                case 3:
                    TLVError = dataTlv.Get(timeoutMs);
                    break;
                default:
                    // Unsupported tag, ignore it.
                    ChipLogProgress(Zcl, "Unknown TLV tag during processing.");
                    break;
                }
                if (TLVError != CHIP_NO_ERROR)
                {
                    ChipLogProgress(Zcl, "Failed to decode TLV data with tag %" PRIx32 ": %" PRId32,
                                    TLV::TagNumFromTag(dataTlv.GetTag()), TLVError);
                }
            }
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfNetworkCommissioningClusterUpdateWiFiNetworkCallback(ssid, credentials, breadcrumb, timeoutMs);
            break;
        }
        default: {
            // Unrecognized command ID, error status will apply.
            // TODO: Encode response for command not found
            ChipLogError(Zcl, "Unknown command %" PRIx16 " for cluster %" PRIx16, commandId, ZCL_NETWORK_COMMISSIONING_CLUSTER_ID);
            break;
        }
        }
    }
}

} // namespace NetworkCommissioning

namespace OnOff {

void DispatchServerCommand(app::Command * command, CommandId commandId, EndpointId endpointId, TLV::TLVReader & dataTlv)
{
    {
        switch (commandId)
        {
        case ZCL_OFF_COMMAND_ID: {
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfOnOffClusterOffCallback();
            break;
        }
        case ZCL_ON_COMMAND_ID: {
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfOnOffClusterOnCallback();
            break;
        }
        case ZCL_TOGGLE_COMMAND_ID: {
            // TODO(#5098) We should pass the Command Object and EndpointId to the cluster callbacks.
            emberAfOnOffClusterToggleCallback();
            break;
        }
        default: {
            // Unrecognized command ID, error status will apply.
            // TODO: Encode response for command not found
            ChipLogError(Zcl, "Unknown command %" PRIx16 " for cluster %" PRIx16, commandId, ZCL_ON_OFF_CLUSTER_ID);
            break;
        }
        }
    }
}

} // namespace OnOff

} // namespace clusters

void DispatchSingleClusterCommand(chip::ClusterId aClusterId, chip::CommandId aCommandId, chip::EndpointId aEndPointId,
                                  chip::TLV::TLVReader & aReader, Command * apCommandObj)
{
    ChipLogDetail(Zcl, "Received Cluster Command: Cluster=%" PRIx16 " Command=%" PRIx8 " Endpoint=%" PRIx8, aClusterId, aCommandId,
                  aEndPointId);
    Compatibility::SetupEmberAfObjects(apCommandObj, aClusterId, aCommandId, aEndPointId);
    switch (aClusterId)
    {
    case ZCL_LEVEL_CONTROL_CLUSTER_ID:
        clusters::LevelControl::DispatchServerCommand(apCommandObj, aCommandId, aEndPointId, aReader);
        break;
    case ZCL_NETWORK_COMMISSIONING_CLUSTER_ID:
        clusters::NetworkCommissioning::DispatchServerCommand(apCommandObj, aCommandId, aEndPointId, aReader);
        break;
    case ZCL_ON_OFF_CLUSTER_ID:
        clusters::OnOff::DispatchServerCommand(apCommandObj, aCommandId, aEndPointId, aReader);
        break;
    default:
        // Unrecognized cluster ID, error status will apply.
        // TODO: Encode response for Cluster not found
        ChipLogError(Zcl, "Unknown cluster %" PRIx16, aClusterId);
        break;
    }
    Compatibility::ResetEmberAfObjects();
}

} // namespace app
} // namespace chip