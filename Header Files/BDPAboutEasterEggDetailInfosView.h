//
//     Generated by private class-dump
//

@class NSMutableArray, BDPUniqueID, NSMutableDictionary;

@interface BDPAboutEasterEggDetailInfosView : UIView {
    BDPUniqueID *_uniqueID;
    NSMutableDictionary *_infoMap;
    NSMutableArray *_infoArray;
}

@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMutableDictionary *infoMap;
@property (retain, nonatomic) NSMutableArray *infoArray;

- (id)getType:(long long)arg0;
- (void)setInfoArray:(id)arg0;
- (void)fillStaticDebugInfo;
- (id)infoMap;
- (void)setInfoMap:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)initWithUniqueID:(id)arg0;
- (void)setupContentView;
- (id)infoArray;

@end
