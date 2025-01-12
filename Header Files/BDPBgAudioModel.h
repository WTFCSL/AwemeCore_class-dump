//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDPBgAudioModel : BDPCommonAudioModel {
    NSString *_title;
    NSString *_epname;
    NSString *_singer;
    NSString *_coverImgUrl;
    NSString *_webUrl;
    NSString *_protocol;
    NSDictionary *_audioPage;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *epname;
@property (copy, nonatomic) NSString *singer;
@property (copy, nonatomic) NSString *coverImgUrl;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *protocol;
@property (copy, nonatomic) NSDictionary *audioPage;

- (void)setWebUrl:(id)arg0;
- (id)singer;
- (void)setSinger:(id)arg0;
- (id)webUrl;
- (id)coverImgUrl;
- (id)audioPage;
- (id)epname;
- (void)setEpname:(id)arg0;
- (void)setCoverImgUrl:(id)arg0;
- (void)setAudioPage:(id)arg0;
- (id)protocol;
- (void).cxx_destruct;
- (void)setProtocol:(id)arg0;
- (id)title;
- (void)setTitle:(id)arg0;

@end
