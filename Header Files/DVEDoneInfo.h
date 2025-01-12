//
//     Generated by private class-dump
//

@class NSString;

@interface DVEDoneInfo : NSObject <DVEDoneInfoProtocol> {
    NSString *_from;
    NSString *_to;
    NSString *_name;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *from;
@property (retain, nonatomic) NSString *to;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoWithActionName:(id)arg0;
+ (id)initWithJsonString:(id)arg0;

- (id)initWithJsonDic:(id)arg0;
- (id)toJson;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;
- (id)from;
- (void)setFrom:(id)arg0;
- (id)to;
- (void)setTo:(id)arg0;
- (id)toJsonString;

@end
