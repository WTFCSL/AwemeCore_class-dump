//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDylibAdapter : NSObject <AWEDylibAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadDylibIfNeedForKey:(id)arg0 ofModule:(id)arg1;
+ (void)loadDylibIfNeedForModule:(id)arg0;
+ (id)dylibNameForKey:(id)arg0 ofModule:(id)arg1;

@end
