//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveUploadMediaAuthInfoModel : IESLiveBridgeModel {
    NSString *_ak;
    NSString *_sk;
    NSString *_st;
    NSString *_spaceName;
}

@property (copy, nonatomic) NSString *ak;
@property (copy, nonatomic) NSString *sk;
@property (copy, nonatomic) NSString *st;
@property (copy, nonatomic) NSString *spaceName;

+ (id)modelCustomPropertyMapper;

- (void)setSpaceName:(id)arg0;
- (id)ak;
- (id)sk;
- (void)setAk:(id)arg0;
- (void)setSk:(id)arg0;
- (void)setSt:(id)arg0;
- (void).cxx_destruct;
- (id)st;
- (id)spaceName;

@end