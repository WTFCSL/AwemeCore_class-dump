//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface QQApiExtraServiceObject : QQApiObject {
    NSString *_serviceID;
    NSString *_openID;
    NSString *_toUin;
    NSDictionary *_extraInfo;
}

@property (retain, nonatomic) NSString *serviceID;
@property (retain, nonatomic) NSString *openID;
@property (retain, nonatomic) NSString *toUin;
@property (retain, nonatomic) NSDictionary *extraInfo;

+ (id)objecWithOpenID:(id)arg0 serviceID:(id)arg1;

- (void)setExtraInfo:(id)arg0;
- (id)openID;
- (void)setOpenID:(id)arg0;
- (id)initWithOpenID:(id)arg0 serviceID:(id)arg1;
- (id)toUin;
- (void)setToUin:(id)arg0;
- (void)setServiceID:(id)arg0;
- (id)serviceID;
- (void)dealloc;
- (id)extraInfo;

@end
