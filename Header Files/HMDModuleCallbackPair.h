//
//     Generated by private class-dump
//

@class NSString;

@interface HMDModuleCallbackPair : NSObject <NSCopying> {
    NSString *_moduleName;
    id /* block */ _callback;
}

@property (retain, nonatomic) NSString *moduleName;
@property (copy, nonatomic) id /* block */ callback;

- (void)setModuleName:(id)arg0;
- (id)initWithModuleName:(id)arg0 callback:(id /* block */)arg1;
- (void)invokeCallbackWithModule:(id)arg0 isWorking:(BOOL)arg1;
- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id /* block */)callback;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)moduleName;

@end
