﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>RevokeCacheSecurityGroupIngress</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RevokeCacheSecurityGroupIngressMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICACHE_API RevokeCacheSecurityGroupIngressRequest : public ElastiCacheRequest
  {
  public:
    RevokeCacheSecurityGroupIngressRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the cache security group to revoke ingress from.</p>
     */
    inline const Aws::String& GetCacheSecurityGroupName() const{ return m_cacheSecurityGroupName; }

    /**
     * <p>The name of the cache security group to revoke ingress from.</p>
     */
    inline void SetCacheSecurityGroupName(const Aws::String& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = value; }

    /**
     * <p>The name of the cache security group to revoke ingress from.</p>
     */
    inline void SetCacheSecurityGroupName(Aws::String&& value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName = value; }

    /**
     * <p>The name of the cache security group to revoke ingress from.</p>
     */
    inline void SetCacheSecurityGroupName(const char* value) { m_cacheSecurityGroupNameHasBeenSet = true; m_cacheSecurityGroupName.assign(value); }

    /**
     * <p>The name of the cache security group to revoke ingress from.</p>
     */
    inline RevokeCacheSecurityGroupIngressRequest& WithCacheSecurityGroupName(const Aws::String& value) { SetCacheSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the cache security group to revoke ingress from.</p>
     */
    inline RevokeCacheSecurityGroupIngressRequest& WithCacheSecurityGroupName(Aws::String&& value) { SetCacheSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the cache security group to revoke ingress from.</p>
     */
    inline RevokeCacheSecurityGroupIngressRequest& WithCacheSecurityGroupName(const char* value) { SetCacheSecurityGroupName(value); return *this;}

    /**
     * <p>The name of the Amazon EC2 security group to revoke access from.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupName() const{ return m_eC2SecurityGroupName; }

    /**
     * <p>The name of the Amazon EC2 security group to revoke access from.</p>
     */
    inline void SetEC2SecurityGroupName(const Aws::String& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = value; }

    /**
     * <p>The name of the Amazon EC2 security group to revoke access from.</p>
     */
    inline void SetEC2SecurityGroupName(Aws::String&& value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName = value; }

    /**
     * <p>The name of the Amazon EC2 security group to revoke access from.</p>
     */
    inline void SetEC2SecurityGroupName(const char* value) { m_eC2SecurityGroupNameHasBeenSet = true; m_eC2SecurityGroupName.assign(value); }

    /**
     * <p>The name of the Amazon EC2 security group to revoke access from.</p>
     */
    inline RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupName(const Aws::String& value) { SetEC2SecurityGroupName(value); return *this;}

    /**
     * <p>The name of the Amazon EC2 security group to revoke access from.</p>
     */
    inline RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupName(Aws::String&& value) { SetEC2SecurityGroupName(value); return *this;}

    /**
     * <p>The name of the Amazon EC2 security group to revoke access from.</p>
     */
    inline RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupName(const char* value) { SetEC2SecurityGroupName(value); return *this;}

    /**
     * <p>The AWS account number of the Amazon EC2 security group owner. Note that this
     * is not the same thing as an AWS access key ID - you must provide a valid AWS
     * account number for this parameter.</p>
     */
    inline const Aws::String& GetEC2SecurityGroupOwnerId() const{ return m_eC2SecurityGroupOwnerId; }

    /**
     * <p>The AWS account number of the Amazon EC2 security group owner. Note that this
     * is not the same thing as an AWS access key ID - you must provide a valid AWS
     * account number for this parameter.</p>
     */
    inline void SetEC2SecurityGroupOwnerId(const Aws::String& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = value; }

    /**
     * <p>The AWS account number of the Amazon EC2 security group owner. Note that this
     * is not the same thing as an AWS access key ID - you must provide a valid AWS
     * account number for this parameter.</p>
     */
    inline void SetEC2SecurityGroupOwnerId(Aws::String&& value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId = value; }

    /**
     * <p>The AWS account number of the Amazon EC2 security group owner. Note that this
     * is not the same thing as an AWS access key ID - you must provide a valid AWS
     * account number for this parameter.</p>
     */
    inline void SetEC2SecurityGroupOwnerId(const char* value) { m_eC2SecurityGroupOwnerIdHasBeenSet = true; m_eC2SecurityGroupOwnerId.assign(value); }

    /**
     * <p>The AWS account number of the Amazon EC2 security group owner. Note that this
     * is not the same thing as an AWS access key ID - you must provide a valid AWS
     * account number for this parameter.</p>
     */
    inline RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(const Aws::String& value) { SetEC2SecurityGroupOwnerId(value); return *this;}

    /**
     * <p>The AWS account number of the Amazon EC2 security group owner. Note that this
     * is not the same thing as an AWS access key ID - you must provide a valid AWS
     * account number for this parameter.</p>
     */
    inline RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(Aws::String&& value) { SetEC2SecurityGroupOwnerId(value); return *this;}

    /**
     * <p>The AWS account number of the Amazon EC2 security group owner. Note that this
     * is not the same thing as an AWS access key ID - you must provide a valid AWS
     * account number for this parameter.</p>
     */
    inline RevokeCacheSecurityGroupIngressRequest& WithEC2SecurityGroupOwnerId(const char* value) { SetEC2SecurityGroupOwnerId(value); return *this;}

  private:
    Aws::String m_cacheSecurityGroupName;
    bool m_cacheSecurityGroupNameHasBeenSet;
    Aws::String m_eC2SecurityGroupName;
    bool m_eC2SecurityGroupNameHasBeenSet;
    Aws::String m_eC2SecurityGroupOwnerId;
    bool m_eC2SecurityGroupOwnerIdHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
