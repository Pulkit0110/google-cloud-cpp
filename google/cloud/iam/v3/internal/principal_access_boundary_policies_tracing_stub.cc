// Copyright 2025 Google LLC
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
// source: google/iam/v3/principal_access_boundary_policies_service.proto

#include "google/cloud/iam/v3/internal/principal_access_boundary_policies_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace iam_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PrincipalAccessBoundaryPoliciesTracingStub::
    PrincipalAccessBoundaryPoliciesTracingStub(
        std::shared_ptr<PrincipalAccessBoundaryPoliciesStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
PrincipalAccessBoundaryPoliciesTracingStub::
    AsyncCreatePrincipalAccessBoundaryPolicy(
        google::cloud::CompletionQueue& cq,
        std::shared_ptr<grpc::ClientContext> context,
        google::cloud::internal::ImmutableOptions options,
        google::iam::v3::CreatePrincipalAccessBoundaryPolicyRequest const&
            request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.v3.PrincipalAccessBoundaryPolicies",
                             "CreatePrincipalAccessBoundaryPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreatePrincipalAccessBoundaryPolicy(
      cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PrincipalAccessBoundaryPoliciesTracingStub::CreatePrincipalAccessBoundaryPolicy(
    grpc::ClientContext& context, Options options,
    google::iam::v3::CreatePrincipalAccessBoundaryPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.v3.PrincipalAccessBoundaryPolicies",
                             "CreatePrincipalAccessBoundaryPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreatePrincipalAccessBoundaryPolicy(context, options, request));
}

StatusOr<google::iam::v3::PrincipalAccessBoundaryPolicy>
PrincipalAccessBoundaryPoliciesTracingStub::GetPrincipalAccessBoundaryPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v3::GetPrincipalAccessBoundaryPolicyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.v3.PrincipalAccessBoundaryPolicies",
                             "GetPrincipalAccessBoundaryPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetPrincipalAccessBoundaryPolicy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PrincipalAccessBoundaryPoliciesTracingStub::
    AsyncUpdatePrincipalAccessBoundaryPolicy(
        google::cloud::CompletionQueue& cq,
        std::shared_ptr<grpc::ClientContext> context,
        google::cloud::internal::ImmutableOptions options,
        google::iam::v3::UpdatePrincipalAccessBoundaryPolicyRequest const&
            request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.v3.PrincipalAccessBoundaryPolicies",
                             "UpdatePrincipalAccessBoundaryPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdatePrincipalAccessBoundaryPolicy(
      cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PrincipalAccessBoundaryPoliciesTracingStub::UpdatePrincipalAccessBoundaryPolicy(
    grpc::ClientContext& context, Options options,
    google::iam::v3::UpdatePrincipalAccessBoundaryPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.v3.PrincipalAccessBoundaryPolicies",
                             "UpdatePrincipalAccessBoundaryPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->UpdatePrincipalAccessBoundaryPolicy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PrincipalAccessBoundaryPoliciesTracingStub::
    AsyncDeletePrincipalAccessBoundaryPolicy(
        google::cloud::CompletionQueue& cq,
        std::shared_ptr<grpc::ClientContext> context,
        google::cloud::internal::ImmutableOptions options,
        google::iam::v3::DeletePrincipalAccessBoundaryPolicyRequest const&
            request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.v3.PrincipalAccessBoundaryPolicies",
                             "DeletePrincipalAccessBoundaryPolicy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeletePrincipalAccessBoundaryPolicy(
      cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PrincipalAccessBoundaryPoliciesTracingStub::DeletePrincipalAccessBoundaryPolicy(
    grpc::ClientContext& context, Options options,
    google::iam::v3::DeletePrincipalAccessBoundaryPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.v3.PrincipalAccessBoundaryPolicies",
                             "DeletePrincipalAccessBoundaryPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DeletePrincipalAccessBoundaryPolicy(context, options, request));
}

StatusOr<google::iam::v3::ListPrincipalAccessBoundaryPoliciesResponse>
PrincipalAccessBoundaryPoliciesTracingStub::ListPrincipalAccessBoundaryPolicies(
    grpc::ClientContext& context, Options const& options,
    google::iam::v3::ListPrincipalAccessBoundaryPoliciesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.v3.PrincipalAccessBoundaryPolicies",
                             "ListPrincipalAccessBoundaryPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListPrincipalAccessBoundaryPolicies(context, options, request));
}

StatusOr<google::iam::v3::SearchPrincipalAccessBoundaryPolicyBindingsResponse>
PrincipalAccessBoundaryPoliciesTracingStub::
    SearchPrincipalAccessBoundaryPolicyBindings(
        grpc::ClientContext& context, Options const& options,
        google::iam::v3::
            SearchPrincipalAccessBoundaryPolicyBindingsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.iam.v3.PrincipalAccessBoundaryPolicies",
                             "SearchPrincipalAccessBoundaryPolicyBindings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SearchPrincipalAccessBoundaryPolicyBindings(
                               context, options, request));
}

StatusOr<google::longrunning::Operation>
PrincipalAccessBoundaryPoliciesTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.iam.v3.PrincipalAccessBoundaryPolicies", "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PrincipalAccessBoundaryPoliciesTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> PrincipalAccessBoundaryPoliciesTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<PrincipalAccessBoundaryPoliciesStub>
MakePrincipalAccessBoundaryPoliciesTracingStub(
    std::shared_ptr<PrincipalAccessBoundaryPoliciesStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<PrincipalAccessBoundaryPoliciesTracingStub>(
      std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v3_internal
}  // namespace cloud
}  // namespace google
