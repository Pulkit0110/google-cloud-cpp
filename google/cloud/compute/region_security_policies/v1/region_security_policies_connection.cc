// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source:
// google/cloud/compute/region_security_policies/v1/region_security_policies.proto

#include "google/cloud/compute/region_security_policies/v1/region_security_policies_connection.h"
#include "google/cloud/compute/region_security_policies/v1/internal/region_security_policies_option_defaults.h"
#include "google/cloud/compute/region_security_policies/v1/internal/region_security_policies_tracing_connection.h"
#include "google/cloud/compute/region_security_policies/v1/region_security_policies_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_region_security_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionSecurityPoliciesConnection::~RegionSecurityPoliciesConnection() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::AddRule(
    google::cloud::cpp::compute::region_security_policies::v1::
        AddRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionSecurityPoliciesConnection::AddRule(
    NoAwaitTag, google::cloud::cpp::compute::region_security_policies::v1::
                    AddRuleRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::AddRule(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::DeleteSecurityPolicy(
    google::cloud::cpp::compute::region_security_policies::v1::
        DeleteSecurityPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionSecurityPoliciesConnection::DeleteSecurityPolicy(
    NoAwaitTag, google::cloud::cpp::compute::region_security_policies::v1::
                    DeleteSecurityPolicyRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::DeleteSecurityPolicy(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>
RegionSecurityPoliciesConnection::GetSecurityPolicy(
    google::cloud::cpp::compute::region_security_policies::v1::
        GetSecurityPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyRule>
RegionSecurityPoliciesConnection::GetRule(
    google::cloud::cpp::compute::region_security_policies::v1::
        GetRuleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::InsertSecurityPolicy(
    google::cloud::cpp::compute::region_security_policies::v1::
        InsertSecurityPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionSecurityPoliciesConnection::InsertSecurityPolicy(
    NoAwaitTag, google::cloud::cpp::compute::region_security_policies::v1::
                    InsertSecurityPolicyRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::InsertSecurityPolicy(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>
RegionSecurityPoliciesConnection::ListRegionSecurityPolicies(
    google::cloud::cpp::compute::region_security_policies::v1::
        ListRegionSecurityPoliciesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::PatchSecurityPolicy(
    google::cloud::cpp::compute::region_security_policies::v1::
        PatchSecurityPolicyRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionSecurityPoliciesConnection::PatchSecurityPolicy(
    NoAwaitTag, google::cloud::cpp::compute::region_security_policies::v1::
                    PatchSecurityPolicyRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::PatchSecurityPolicy(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::PatchRule(
    google::cloud::cpp::compute::region_security_policies::v1::
        PatchRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionSecurityPoliciesConnection::PatchRule(
    NoAwaitTag, google::cloud::cpp::compute::region_security_policies::v1::
                    PatchRuleRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::PatchRule(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::RemoveRule(
    google::cloud::cpp::compute::region_security_policies::v1::
        RemoveRuleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionSecurityPoliciesConnection::RemoveRule(
    NoAwaitTag, google::cloud::cpp::compute::region_security_policies::v1::
                    RemoveRuleRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::RemoveRule(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::SetLabels(
    google::cloud::cpp::compute::region_security_policies::v1::
        SetLabelsRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
RegionSecurityPoliciesConnection::SetLabels(
    NoAwaitTag, google::cloud::cpp::compute::region_security_policies::v1::
                    SetLabelsRequest const&) {
  return StatusOr<google::cloud::cpp::compute::v1::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionSecurityPoliciesConnection::SetLabels(
    google::cloud::cpp::compute::v1::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_security_policies_v1
}  // namespace cloud
}  // namespace google
