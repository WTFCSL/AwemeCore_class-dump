//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEIMLittleEmoticonLostTracker : NSObject {
    NSMutableDictionary *_params;
}

@property (retain, nonatomic) NSMutableDictionary *params;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *emojiText;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) BOOL fileExist;
@property (nonatomic) long long errCode;
@property (nonatomic) long long lostFileCount;

- (void)setErrCode:(long long)arg0;
- (void)setEmojiText:(id)arg0;
- (void)setFileExist:(BOOL)arg0;
- (void)setLostFileCount:(long long)arg0;
- (id)init;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (void)report;
- (void)setSource:(id)arg0;
- (id)params;
- (void)setMd5:(id)arg0;
- (void)setParams:(id)arg0;

@end
