//
//     Generated by private class-dump
//

@class NSString, IESECURLModel;

@interface IESECMallInnerFeedProductTagsInfoModel : MTLModel <MTLJSONSerializing> {
    IESECURLModel *_icon;
    NSString *_content;
    NSString *_header;
    long long _uiType;
    NSString *_extra;
}

@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *header;
@property (nonatomic) long long uiType;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (id)header;
- (id)content;
- (id)extra;
- (void)setContent:(id)arg0;
- (void)setIcon:(id)arg0;
- (void)setHeader:(id)arg0;
- (long long)uiType;
- (void)setUiType:(long long)arg0;

@end