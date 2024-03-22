//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWECommerceInfoModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_offlineInfoType;
    NSString *_text;
    NSString *_action;
    NSString *_linkType;
}

@property (retain, nonatomic) NSNumber *offlineInfoType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *linkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)offlineInfoType;
- (void)setOfflineInfoType:(id)arg0;
- (void)setLinkType:(id)arg0;
- (id)linkType;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setAction:(id)arg0;
- (id)action;
- (id)text;

@end
