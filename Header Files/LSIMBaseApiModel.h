//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary;

@interface LSIMBaseApiModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_statusCode;
    NSString *_statusMsg;
    NSDictionary *_data;
}

@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setNilValueForKey:(id)arg0;

@end