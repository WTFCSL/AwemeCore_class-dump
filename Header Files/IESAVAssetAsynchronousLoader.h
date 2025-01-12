//
//     Generated by private class-dump
//

@class NSArray;
@protocol IESAVAssetAsynchronousLoaderDelegate;

@interface IESAVAssetAsynchronousLoader : NSObject {
    BOOL _loading;
    id<IESAVAssetAsynchronousLoaderDelegate> _delegate;
    NSArray *_assets;
}

@property (retain, nonatomic) NSArray *assets;
@property (weak, nonatomic) id<IESAVAssetAsynchronousLoaderDelegate> delegate;
@property (nonatomic, getter=isLoading) BOOL loading;

- (void)setupAsset:(id)arg0 atIndex:(long long)arg1 group:(id)arg2 assetArray:(id)arg3;
- (void)loadAssetsAsynchronouslyWithCompletion:(id /* block */)arg0;
- (BOOL)isLoading;
- (void)setLoading:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setAssets:(id)arg0;
- (id)delegate;
- (void)cancelLoading;
- (id)assets;
- (void)setDelegate:(id)arg0;
- (id)initWithAssets:(id)arg0;

@end
