//
//     Generated by private class-dump
//

@class NSMutableSet;

@interface BDPUnisusNapiJSModuleRegister : NSObject {
    NSMutableSet *_classes;
}

@property (retain, nonatomic) NSMutableSet *classes;

+ (id)sharedInstance;

- (void)registerUnisusModuleClass:(Class)arg0;
- (void).cxx_destruct;
- (id)classes;
- (void)setClasses:(id)arg0;

@end
