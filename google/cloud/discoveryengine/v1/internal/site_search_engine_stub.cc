// Copyright 2024 Google LLC
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
// source: google/cloud/discoveryengine/v1/site_search_engine_service.proto

#include "google/cloud/discoveryengine/v1/internal/site_search_engine_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/discoveryengine/v1/site_search_engine_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SiteSearchEngineServiceStub::~SiteSearchEngineServiceStub() = default;

StatusOr<google::cloud::discoveryengine::v1::SiteSearchEngine>
DefaultSiteSearchEngineServiceStub::GetSiteSearchEngine(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::GetSiteSearchEngineRequest const&
        request) {
  google::cloud::discoveryengine::v1::SiteSearchEngine response;
  auto status = grpc_stub_->GetSiteSearchEngine(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSiteSearchEngineServiceStub::AsyncCreateTargetSite(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::CreateTargetSiteRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::discoveryengine::v1::CreateTargetSiteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::discoveryengine::v1::CreateTargetSiteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateTargetSite(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSiteSearchEngineServiceStub::CreateTargetSite(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::CreateTargetSiteRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateTargetSite(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSiteSearchEngineServiceStub::AsyncBatchCreateTargetSites(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::BatchCreateTargetSitesRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::discoveryengine::v1::BatchCreateTargetSitesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::discoveryengine::v1::
                 BatchCreateTargetSitesRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchCreateTargetSites(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSiteSearchEngineServiceStub::BatchCreateTargetSites(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::BatchCreateTargetSitesRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->BatchCreateTargetSites(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::discoveryengine::v1::TargetSite>
DefaultSiteSearchEngineServiceStub::GetTargetSite(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::GetTargetSiteRequest const& request) {
  google::cloud::discoveryengine::v1::TargetSite response;
  auto status = grpc_stub_->GetTargetSite(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSiteSearchEngineServiceStub::AsyncUpdateTargetSite(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::UpdateTargetSiteRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::discoveryengine::v1::UpdateTargetSiteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::discoveryengine::v1::UpdateTargetSiteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateTargetSite(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSiteSearchEngineServiceStub::UpdateTargetSite(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::UpdateTargetSiteRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateTargetSite(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSiteSearchEngineServiceStub::AsyncDeleteTargetSite(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::DeleteTargetSiteRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::discoveryengine::v1::DeleteTargetSiteRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::discoveryengine::v1::DeleteTargetSiteRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteTargetSite(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSiteSearchEngineServiceStub::DeleteTargetSite(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::DeleteTargetSiteRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteTargetSite(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::discoveryengine::v1::ListTargetSitesResponse>
DefaultSiteSearchEngineServiceStub::ListTargetSites(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::ListTargetSitesRequest const& request) {
  google::cloud::discoveryengine::v1::ListTargetSitesResponse response;
  auto status = grpc_stub_->ListTargetSites(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSiteSearchEngineServiceStub::AsyncCreateSitemap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::CreateSitemapRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::discoveryengine::v1::CreateSitemapRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::discoveryengine::v1::CreateSitemapRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateSitemap(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSiteSearchEngineServiceStub::CreateSitemap(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::CreateSitemapRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateSitemap(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSiteSearchEngineServiceStub::AsyncDeleteSitemap(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::DeleteSitemapRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::discoveryengine::v1::DeleteSitemapRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::discoveryengine::v1::DeleteSitemapRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteSitemap(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSiteSearchEngineServiceStub::DeleteSitemap(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::DeleteSitemapRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteSitemap(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::discoveryengine::v1::FetchSitemapsResponse>
DefaultSiteSearchEngineServiceStub::FetchSitemaps(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::FetchSitemapsRequest const& request) {
  google::cloud::discoveryengine::v1::FetchSitemapsResponse response;
  auto status = grpc_stub_->FetchSitemaps(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSiteSearchEngineServiceStub::AsyncEnableAdvancedSiteSearch(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::EnableAdvancedSiteSearchRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::discoveryengine::v1::EnableAdvancedSiteSearchRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::discoveryengine::v1::
                 EnableAdvancedSiteSearchRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncEnableAdvancedSiteSearch(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSiteSearchEngineServiceStub::EnableAdvancedSiteSearch(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::EnableAdvancedSiteSearchRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->EnableAdvancedSiteSearch(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSiteSearchEngineServiceStub::AsyncDisableAdvancedSiteSearch(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::DisableAdvancedSiteSearchRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::discoveryengine::v1::DisableAdvancedSiteSearchRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::discoveryengine::v1::
                 DisableAdvancedSiteSearchRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDisableAdvancedSiteSearch(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSiteSearchEngineServiceStub::DisableAdvancedSiteSearch(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::DisableAdvancedSiteSearchRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DisableAdvancedSiteSearch(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSiteSearchEngineServiceStub::AsyncRecrawlUris(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::RecrawlUrisRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::discoveryengine::v1::RecrawlUrisRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::discoveryengine::v1::RecrawlUrisRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncRecrawlUris(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSiteSearchEngineServiceStub::RecrawlUris(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::RecrawlUrisRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->RecrawlUris(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultSiteSearchEngineServiceStub::AsyncBatchVerifyTargetSites(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::discoveryengine::v1::BatchVerifyTargetSitesRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::discoveryengine::v1::BatchVerifyTargetSitesRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::discoveryengine::v1::
                 BatchVerifyTargetSitesRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncBatchVerifyTargetSites(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultSiteSearchEngineServiceStub::BatchVerifyTargetSites(
    grpc::ClientContext& context, Options,
    google::cloud::discoveryengine::v1::BatchVerifyTargetSitesRequest const&
        request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->BatchVerifyTargetSites(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::cloud::discoveryengine::v1::FetchDomainVerificationStatusResponse>
DefaultSiteSearchEngineServiceStub::FetchDomainVerificationStatus(
    grpc::ClientContext& context, Options const&,
    google::cloud::discoveryengine::v1::
        FetchDomainVerificationStatusRequest const& request) {
  google::cloud::discoveryengine::v1::FetchDomainVerificationStatusResponse
      response;
  auto status =
      grpc_stub_->FetchDomainVerificationStatus(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultSiteSearchEngineServiceStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultSiteSearchEngineServiceStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultSiteSearchEngineServiceStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultSiteSearchEngineServiceStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_stub_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultSiteSearchEngineServiceStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_stub_->AsyncCancelOperation(context, request,
                                                             cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
