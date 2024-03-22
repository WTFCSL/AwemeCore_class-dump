//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface CJPayGurdImgModel : JSONModel {
    BOOL _enableGurdImg;
    NSString *_cdnUrl;
    NSArray *_iosImgChannelList;
}

@property (nonatomic) BOOL enableGurdImg;
@property (copy, nonatomic) NSString *cdnUrl;
@property (copy, nonatomic) NSArray *iosImgChannelList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)cdnUrl;
- (void)setCdnUrl:(id)arg0;
- (void)setEnableGurdImg:(BOOL)arg0;
- (id)iosImgChannelList;
- (BOOL)enableGurdImg;
- (void)setIosImgChannelList:(id)arg0;
- (void).cxx_destruct;

@end
