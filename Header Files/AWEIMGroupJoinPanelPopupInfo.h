//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSString;

@interface AWEIMGroupJoinPanelPopupInfo : MTLModel <MTLJSONSerializing> {
    NSNumber *_type;
    NSArray *_noticeList;
}

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSArray *noticeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)noticeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)noticeList;
- (void)setNoticeList:(id)arg0;
- (void).cxx_destruct;
- (id)type;
- (void)setType:(id)arg0;

@end
