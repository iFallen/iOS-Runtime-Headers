/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SocialDaemon.framework/SocialDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, ALAssetsLibrary, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface SLDFacebookImageAssetDataProvider : NSObject  {
    ALAssetsLibrary *_assetsLibrary;
    int _numRequestedImages;
    unsigned int _maxByteSize;
    NSMutableArray *_deliveryQueue;
    NSError *_lastError;
    NSObject<OS_dispatch_queue> *_downsamplingQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchCompletion;

}

@property(copy) id fetchCompletion;


- (void).cxx_destruct;
- (id)init;
- (void)_assetFetchFailedWithError:(id)arg1;
- (void)fetchedAsset:(id)arg1;
- (void)_downsamplingCompletedForAsset:(id)arg1 withDownsampledData:(id)arg2;
- (void)_downsamplingFailedForAsset:(id)arg1 withError:(id)arg2;
- (void)_checkDeliveryComplete;
- (void)setFetchCompletion:(id)arg1;
- (id)fetchCompletion;
- (void)fetchImageDataForAssetsURLs:(id)arg1 maxByteSize:(unsigned int)arg2 completion:(id)arg3;

@end