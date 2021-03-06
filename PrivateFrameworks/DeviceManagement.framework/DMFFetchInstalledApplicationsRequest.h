/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchInstalledApplicationsRequest : CATTaskRequest {
    NSArray * _bundleIdentifiers;
}

@property (nonatomic, copy) NSArray *bundleIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBundleIdentifiers:(id)arg1;

@end
