/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;



@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress>
{
    NSString *_address;
}

@property(readonly) NSString *address;

+ (id)emailAddress:(id)arg1;

- (id)canonicalFormat;
- (id)initWithAddress:(id)arg1;
- (id)encodedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)address;

@end