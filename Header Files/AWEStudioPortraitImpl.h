//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStudioPortraitImpl : NSObject <ACCPortraitGetterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)getPortraitAsInt:(id)arg0 defaultValue:(int)arg1;
- (float)getPortraitAsFloat:(id)arg0 defaultValue:(float)arg1;
- (double)getPortraitAsDouble:(id)arg0 defaultValue:(double)arg1;
- (long long)getPortraitAsLong:(id)arg0 defaultValue:(long long)arg1;
- (BOOL)getPortraitAsBool:(id)arg0 defaultValue:(BOOL)arg1;
- (id)getPortraitAsDictionary:(id)arg0 defaultValue:(id)arg1;
- (id)getPortraitAsArray:(id)arg0 defaultValue:(id)arg1;
- (void)p_checkKey:(id)arg0;

@end
