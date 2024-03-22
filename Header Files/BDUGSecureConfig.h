//
//     Generated by private class-dump
//

@class NSString;

@interface BDUGSecureConfig : NSObject {
    BOOL _needConsumeRepeatedly;
    BOOL _detectPatternsEnable;
    NSString *_key;
    NSString *_notificationName;
    id /* block */ _content;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *notificationName;
@property (nonatomic) BOOL needConsumeRepeatedly;
@property (nonatomic) BOOL detectPatternsEnable;
@property (copy, nonatomic) id /* block */ content;

- (BOOL)needConsumeRepeatedly;
- (void)setNeedConsumeRepeatedly:(BOOL)arg0;
- (BOOL)detectPatternsEnable;
- (void)setDetectPatternsEnable:(BOOL)arg0;
- (id)key;
- (id)init;
- (void).cxx_destruct;
- (void)setNotificationName:(id)arg0;
- (id /* block */)content;
- (void)setKey:(id)arg0;
- (id)notificationName;
- (void)setContent:(id /* block */)arg0;

@end
