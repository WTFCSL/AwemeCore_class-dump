//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface HGHostChatGroupPluginModel : HGBasePluginModel {
    NSDictionary *_bizExt;
    long long _sourceType;
    NSString *_enterFrom;
    NSDictionary *_trackDictionary;
}

@property (copy, nonatomic) NSDictionary *bizExt;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *trackDictionary;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setBizExt:(id)arg0;
- (void)setTrackDictionary:(id)arg0;
- (id)bizExt;
- (id)trackDictionary;
- (void)setSourceType:(long long)arg0;
- (long long)sourceType;
- (void).cxx_destruct;

@end
