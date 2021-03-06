/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPlayableAsset : NSObject {
    NSURL *_contentURL;
    double _initialPlaybackTime;
    double _playbackDuration;
    BOOL _shouldUseITunesStoreSecureKeyDelivery;
    long long _storeItemIdentifier;
}

@property (nonatomic, copy) NSURL *contentURL;
@property (nonatomic) double initialPlaybackTime;
@property (nonatomic) double playbackDuration;
@property (nonatomic) BOOL shouldUseITunesStoreSecureKeyDelivery;
@property (nonatomic) long long storeItemIdentifier;

- (void).cxx_destruct;
- (id)contentURL;
- (id)init;
- (id)initWithContentURL:(id)arg1;
- (id)initWithVideo:(id)arg1;
- (id)initWithVideoViewElement:(id)arg1 assetViewElement:(id)arg2;
- (double)initialPlaybackTime;
- (double)playbackDuration;
- (void)setContentURL:(id)arg1;
- (void)setInitialPlaybackTime:(double)arg1;
- (void)setPlaybackDuration:(double)arg1;
- (void)setShouldUseITunesStoreSecureKeyDelivery:(BOOL)arg1;
- (void)setStoreItemIdentifier:(long long)arg1;
- (BOOL)shouldUseITunesStoreSecureKeyDelivery;
- (long long)storeItemIdentifier;

@end
