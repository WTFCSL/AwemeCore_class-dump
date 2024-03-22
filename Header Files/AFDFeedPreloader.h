//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, NSMutableArray, NSIndexPath;
@protocol AFDFeedPreloaderDelegate;

@interface AFDFeedPreloader : NSObject {
    BOOL _isPreloading;
    BOOL _preloadCompleted;
    BOOL _postPreloadEnabled;
    BOOL _isPostPreloading;
    long long _status;
    long long _maximumPreloadCount;
    long long _preloadSequenceNumber;
    NSIndexPath *_fromIndexPath;
    NSArray *_preloadItems;
    id<AFDFeedPreloaderDelegate> _delegate;
    long long _maximumPostPreloadCount;
    long long _invalidPreloadSequenceNumber;
    NSMutableArray *_currentPreloadingIndexPaths;
    double _timeIntervalToRepreload;
    NSMutableDictionary *_completedPreloadItems;
}

@property (nonatomic) BOOL isPreloading;
@property (nonatomic) long long preloadSequenceNumber;
@property (nonatomic) long long invalidPreloadSequenceNumber;
@property (copy, nonatomic) NSArray *preloadItems;
@property (retain, nonatomic) NSMutableArray *currentPreloadingIndexPaths;
@property (retain, nonatomic) NSIndexPath *fromIndexPath;
@property (nonatomic) BOOL preloadCompleted;
@property (nonatomic) double timeIntervalToRepreload;
@property (retain, nonatomic) NSMutableDictionary *completedPreloadItems;
@property (nonatomic) BOOL isPostPreloading;
@property (readonly, nonatomic) long long status;
@property (nonatomic) long long maximumPreloadCount;
@property (readonly, nonatomic) NSArray *preloadingItems;
@property (readonly, nonatomic) NSArray *preloadingIndexPaths;
@property (readonly, nonatomic) NSIndexPath *currentMaximumPreloadingIndexPath;
@property (weak, nonatomic) id<AFDFeedPreloaderDelegate> delegate;
@property (nonatomic) BOOL postPreloadEnabled;
@property (nonatomic) long long maximumPostPreloadCount;

- (void)setIsPreloading:(BOOL)arg0;
- (void)setPostPreloadEnabled:(BOOL)arg0;
- (void)setMaximumPreloadCount:(long long)arg0;
- (void)startPreloadingWithPreloadItems:(id)arg0 fromIndexPath:(id)arg1;
- (id)preloadingIndexPaths;
- (void)logWithText:(id)arg0;
- (void)cancelSoftly;
- (id)preloadItems;
- (void)enqueuePreloadItems:(id)arg0;
- (long long)preloadSequenceNumber;
- (void)setPreloadSequenceNumber:(long long)arg0;
- (void)setPreloadItems:(id)arg0;
- (void)setPreloadCompleted:(BOOL)arg0;
- (void)setFromIndexPath:(id)arg0;
- (void)prepareToPreloadWithPreloadItems:(id)arg0;
- (void)startPreloadingFromIndexPath:(id)arg0;
- (BOOL)isPostPreloading;
- (long long)maximumPostPreloadCount;
- (long long)maximumPreloadCount;
- (BOOL)postPreloadEnabled;
- (void)setIsPostPreloading:(BOOL)arg0;
- (id)currentPreloadingIndexPaths;
- (id)preloadItemAtIndexPath:(id)arg0;
- (id)completedPreloadItems;
- (double)timeIntervalToRepreload;
- (id)currentMaximumPreloadingIndexPath;
- (id)nextIndexPathOfIndexPath:(id)arg0;
- (long long)invalidPreloadSequenceNumber;
- (void)startPreloadingWithPreloadItem:(id)arg0 timeoutInterval:(double)arg1 completion:(id /* block */)arg2;
- (void)cancelWithCancelCurrentTask:(BOOL)arg0;
- (void)setInvalidPreloadSequenceNumber:(long long)arg0;
- (id)preloadingItems;
- (BOOL)preloadCompleted;
- (void)setMaximumPostPreloadCount:(long long)arg0;
- (void)setCurrentPreloadingIndexPaths:(id)arg0;
- (void)setTimeIntervalToRepreload:(double)arg0;
- (void)setCompletedPreloadItems:(id)arg0;
- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (long long)status;
- (id)delegate;
- (void)cancel;
- (void)setDelegate:(id)arg0;
- (void)pause;
- (BOOL)isPreloading;
- (id)fromIndexPath;

@end