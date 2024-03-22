//
//     Generated by private class-dump
//

@class PHFetchResult;

@interface AWEDetectAlbumFaceTask : NSOperation {
    PHFetchResult *_fetchResult;
    unsigned long long _maxAssetCount;
    unsigned long long _detectedCount;
    id /* block */ _didUpdatedBlock;
    id /* block */ _assetFilterBlock;
}

@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (nonatomic) unsigned long long maxAssetCount;
@property (nonatomic) unsigned long long detectedCount;
@property (copy, nonatomic) id /* block */ didUpdatedBlock;
@property (copy, nonatomic) id /* block */ assetFilterBlock;

+ (id)dispatchQueue;

- (unsigned long long)maxAssetCount;
- (void)setMaxAssetCount:(unsigned long long)arg0;
- (void)setAssetFilterBlock:(id /* block */)arg0;
- (id /* block */)assetFilterBlock;
- (void)setDidUpdatedBlock:(id /* block */)arg0;
- (unsigned long long)detectedCount;
- (void)setDetectedCount:(unsigned long long)arg0;
- (id /* block */)didUpdatedBlock;
- (id)initWithFetchResult:(id)arg0 maxAssetCount:(unsigned long long)arg1;
- (id)fetchResult;
- (void)main;
- (void).cxx_destruct;
- (void)setFetchResult:(id)arg0;

@end
