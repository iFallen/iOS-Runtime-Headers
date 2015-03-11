/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEORequester, NSString;

@interface GEOVoltaireAddressCorrectionProvider : NSObject <PBRequesterDelegate> {
    id _errorHandler;
    id _initFinishedHandler;
    GEORequester *_requester;
    id _updateFinishedHandler;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) GEORequester * requester;
@property(readonly) Class superclass;

+ (id)acInitUrl;
+ (id)acUpdateURL;

- (void)cancelRequest;
- (void)dealloc;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (id)requester;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)setRequester:(id)arg1;
- (void)startInitRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;
- (void)startUpdateRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;

@end