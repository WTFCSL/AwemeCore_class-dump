//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface LynxRoute : NSObject {
    NSString *_templateUrl;
    NSString *_routeName;
    NSDictionary *_param;
}

@property (retain) NSString *templateUrl;
@property (retain) NSString *routeName;
@property (retain) NSDictionary *param;

- (id)initWithUrl:(id)arg0 param:(id)arg1;
- (id)initWithUrl:(id)arg0 routeName:(id)arg1 param:(id)arg2;
- (void)setParam:(id)arg0;
- (id)routeName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)param;
- (void)setRouteName:(id)arg0;
- (id)templateUrl;
- (void)setTemplateUrl:(id)arg0;

@end
