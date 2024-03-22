//
//     Generated by private class-dump
//

@class NSArray, BDPUniqueID;

@interface BDPPreviewImagePluginModel : BDPBasePluginModel {
    BOOL _isShowMenuEnable;
    NSArray *_images;
    long long _startIndex;
    BDPUniqueID *_uniqueID;
}

@property (retain, nonatomic) NSArray *images;
@property (nonatomic) long long startIndex;
@property (nonatomic) BOOL isShowMenuEnable;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (BOOL)isShowMenuEnable;
- (void)setIsShowMenuEnable:(BOOL)arg0;
- (long long)startIndex;
- (void)setStartIndex:(long long)arg0;
- (id)images;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)setImages:(id)arg0;

@end
