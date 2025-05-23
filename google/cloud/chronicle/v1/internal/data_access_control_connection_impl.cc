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
// source: google/cloud/chronicle/v1/data_access_control.proto

#include "google/cloud/chronicle/v1/internal/data_access_control_connection_impl.h"
#include "google/cloud/chronicle/v1/internal/data_access_control_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace chronicle_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<chronicle_v1::DataAccessControlServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<chronicle_v1::DataAccessControlServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options
      .get<chronicle_v1::DataAccessControlServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<
    chronicle_v1::DataAccessControlServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<chronicle_v1::
               DataAccessControlServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

}  // namespace

DataAccessControlServiceConnectionImpl::DataAccessControlServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<chronicle_v1_internal::DataAccessControlServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), DataAccessControlServiceConnection::options())) {}

StatusOr<google::cloud::chronicle::v1::DataAccessLabel>
DataAccessControlServiceConnectionImpl::CreateDataAccessLabel(
    google::cloud::chronicle::v1::CreateDataAccessLabelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateDataAccessLabel(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::chronicle::v1::CreateDataAccessLabelRequest const&
                 request) {
        return stub_->CreateDataAccessLabel(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::chronicle::v1::DataAccessLabel>
DataAccessControlServiceConnectionImpl::GetDataAccessLabel(
    google::cloud::chronicle::v1::GetDataAccessLabelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetDataAccessLabel(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::chronicle::v1::GetDataAccessLabelRequest const&
                 request) {
        return stub_->GetDataAccessLabel(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::chronicle::v1::DataAccessLabel>
DataAccessControlServiceConnectionImpl::ListDataAccessLabels(
    google::cloud::chronicle::v1::ListDataAccessLabelsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListDataAccessLabels(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::chronicle::v1::DataAccessLabel>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<chronicle_v1::DataAccessControlServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::chronicle::v1::ListDataAccessLabelsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::chronicle::v1::ListDataAccessLabelsRequest const&
                    request) {
              return stub->ListDataAccessLabels(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::chronicle::v1::ListDataAccessLabelsResponse r) {
        std::vector<google::cloud::chronicle::v1::DataAccessLabel> result(
            r.data_access_labels().size());
        auto& messages = *r.mutable_data_access_labels();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::chronicle::v1::DataAccessLabel>
DataAccessControlServiceConnectionImpl::UpdateDataAccessLabel(
    google::cloud::chronicle::v1::UpdateDataAccessLabelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateDataAccessLabel(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::chronicle::v1::UpdateDataAccessLabelRequest const&
                 request) {
        return stub_->UpdateDataAccessLabel(context, options, request);
      },
      *current, request, __func__);
}

Status DataAccessControlServiceConnectionImpl::DeleteDataAccessLabel(
    google::cloud::chronicle::v1::DeleteDataAccessLabelRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteDataAccessLabel(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::chronicle::v1::DeleteDataAccessLabelRequest const&
                 request) {
        return stub_->DeleteDataAccessLabel(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::chronicle::v1::DataAccessScope>
DataAccessControlServiceConnectionImpl::CreateDataAccessScope(
    google::cloud::chronicle::v1::CreateDataAccessScopeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateDataAccessScope(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::chronicle::v1::CreateDataAccessScopeRequest const&
                 request) {
        return stub_->CreateDataAccessScope(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::chronicle::v1::DataAccessScope>
DataAccessControlServiceConnectionImpl::GetDataAccessScope(
    google::cloud::chronicle::v1::GetDataAccessScopeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetDataAccessScope(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::chronicle::v1::GetDataAccessScopeRequest const&
                 request) {
        return stub_->GetDataAccessScope(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::chronicle::v1::DataAccessScope>
DataAccessControlServiceConnectionImpl::ListDataAccessScopes(
    google::cloud::chronicle::v1::ListDataAccessScopesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListDataAccessScopes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::chronicle::v1::DataAccessScope>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<chronicle_v1::DataAccessControlServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::chronicle::v1::ListDataAccessScopesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::chronicle::v1::ListDataAccessScopesRequest const&
                    request) {
              return stub->ListDataAccessScopes(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::chronicle::v1::ListDataAccessScopesResponse r) {
        std::vector<google::cloud::chronicle::v1::DataAccessScope> result(
            r.data_access_scopes().size());
        auto& messages = *r.mutable_data_access_scopes();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::chronicle::v1::DataAccessScope>
DataAccessControlServiceConnectionImpl::UpdateDataAccessScope(
    google::cloud::chronicle::v1::UpdateDataAccessScopeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateDataAccessScope(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::chronicle::v1::UpdateDataAccessScopeRequest const&
                 request) {
        return stub_->UpdateDataAccessScope(context, options, request);
      },
      *current, request, __func__);
}

Status DataAccessControlServiceConnectionImpl::DeleteDataAccessScope(
    google::cloud::chronicle::v1::DeleteDataAccessScopeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteDataAccessScope(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::chronicle::v1::DeleteDataAccessScopeRequest const&
                 request) {
        return stub_->DeleteDataAccessScope(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::longrunning::Operation>
DataAccessControlServiceConnectionImpl::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::longrunning::Operation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry =
           std::shared_ptr<chronicle_v1::DataAccessControlServiceRetryPolicy>(
               retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::longrunning::ListOperationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::longrunning::ListOperationsRequest const& request) {
              return stub->ListOperations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::longrunning::ListOperationsResponse r) {
        std::vector<google::longrunning::Operation> result(
            r.operations().size());
        auto& messages = *r.mutable_operations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::longrunning::Operation>
DataAccessControlServiceConnectionImpl::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return stub_->GetOperation(context, options, request);
      },
      *current, request, __func__);
}

Status DataAccessControlServiceConnectionImpl::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::DeleteOperationRequest const& request) {
        return stub_->DeleteOperation(context, options, request);
      },
      *current, request, __func__);
}

Status DataAccessControlServiceConnectionImpl::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CancelOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return stub_->CancelOperation(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace chronicle_v1_internal
}  // namespace cloud
}  // namespace google
