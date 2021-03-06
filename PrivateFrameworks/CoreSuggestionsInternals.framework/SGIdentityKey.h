/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGIdentityKey : NSObject <NSCopying> {
    NSString * _content;
    unsigned int  _type;
}

@property (nonatomic, readonly) NSString *externalId;
@property (nonatomic, readonly) unsigned int type;

+ (unsigned int)identityTypeForKeyPart:(id)arg1;
+ (BOOL)isSupportedEntityType:(long long)arg1;
+ (id)keyForContactExternalId:(int)arg1;
+ (id)keyForContactUniqueId:(id)arg1;
+ (id)keyForEmail:(id)arg1;
+ (id)keyForInstantMessageAddress:(id)arg1;
+ (id)keyForNormalizedEmail:(id)arg1;
+ (id)keyForNormalizedPhone:(id)arg1;
+ (id)keyForPersonHandle:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (id)externalId;
- (BOOL)hasEmailAddress;
- (BOOL)hasInstantMessageAddress;
- (BOOL)hasPhone;
- (unsigned int)hash;
- (id)identityKey;
- (id)initWithSerialized:(id)arg1;
- (id)initWithType:(unsigned int)arg1 content:(id)arg2;
- (id)instantMessageAddress;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToIdentityKey:(id)arg1;
- (id)phone;
- (id)serialize;
- (unsigned int)type;
- (id)uniqueIdentifier;

@end
