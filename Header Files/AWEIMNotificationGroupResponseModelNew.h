//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableArray;

@interface AWEIMNotificationGroupResponseModelNew : AWEBaseApiModel {
    NSMutableArray *_noticeGroupArray;
    NSDictionary *_extra;
}

@property (retain, nonatomic) NSMutableArray *noticeGroupArray;
@property (retain, nonatomic) NSDictionary *extra;

+ (id)noticeGroupArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)noticeGroupArray;
- (void)setNoticeGroupArray:(id)arg0;
- (void).cxx_destruct;
- (id)extra;

@end
