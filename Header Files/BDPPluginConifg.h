//
//     Generated by private class-dump
//

@class NSString;

@interface BDPPluginConifg : NSObject {
    BOOL _isDynamic;
    NSString *_version;
}

@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL isDynamic;

+ (void)bootstrapLaunch;

- (BOOL)isDynamic;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;
- (void)setIsDynamic:(BOOL)arg0;

@end
