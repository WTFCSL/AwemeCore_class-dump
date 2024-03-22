//
//     Generated by private class-dump
//

@class NSString, NSArray, NSMutableArray;

@interface IESLiveNativeAppSquareGroupModel : IESLiveDynamicModel {
    NSMutableArray *_bannerArray;
}

@property (nonatomic) int groupType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long capacity;
@property (copy, nonatomic) NSString *liveDesc;
@property (copy, nonatomic) NSString *liveDescLinkURL;
@property (copy, nonatomic) NSArray *rowNodeArray;
@property (retain, nonatomic) NSMutableArray *bannerArray;

- (id)bannerArray;
- (void)setBannerArray:(id)arg0;
- (void).cxx_destruct;
- (id)description;

@end