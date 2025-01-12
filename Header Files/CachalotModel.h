//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSString, XFeedStructModel, XFeedGlobalUIModel, XFeedExtraModel;

@interface CachalotModel : MTLModel <MTLJSONSerializing> {
    NSArray *_businessData;
    NSArray *_renderInfo;
    XFeedStructModel *_structData;
    XFeedGlobalUIModel *_globalUI;
    XFeedExtraModel *_extra;
    unsigned long long _containerType;
    NSNumber *_statusCode;
    NSString *_statusMsg;
}

@property (retain, nonatomic) NSArray *businessData;
@property (retain, nonatomic) NSArray *renderInfo;
@property (retain, nonatomic) XFeedStructModel *structData;
@property (retain, nonatomic) XFeedGlobalUIModel *globalUI;
@property (retain, nonatomic) XFeedExtraModel *extra;
@property (nonatomic) unsigned long long containerType;
@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraJSONTransformer;
+ (id)structJSONTransformer;
+ (id)globalUIJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (id)businessData;
- (void)setBusinessData:(id)arg0;
- (void)setRenderInfo:(id)arg0;
- (id)structData;
- (void)setStructData:(id)arg0;
- (id)globalUI;
- (void)setGlobalUI:(id)arg0;
- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (void).cxx_destruct;
- (id)extra;
- (unsigned long long)containerType;
- (void)setContainerType:(unsigned long long)arg0;
- (id)renderInfo;

@end
