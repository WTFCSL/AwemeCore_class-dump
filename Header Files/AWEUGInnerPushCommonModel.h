//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEUGInnerPushContentModel, NSNumber;

@interface AWEUGInnerPushCommonModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_statusCode;
    NSString *_statusMsg;
    AWEUGInnerPushContentModel *_model;
    NSDictionary *_data;
}

@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) AWEUGInnerPushContentModel *model;
@property (retain, nonatomic) NSDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (id)statusCode;
- (void)setModel:(id)arg0;
- (void)setStatusCode:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (id)model;
- (void)setData:(id)arg0;

@end