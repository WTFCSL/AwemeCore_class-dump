//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHGIronManService : HTSService <AWEHGIronManService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)timorSchemaCodecWithSchema:(id)arg0 scene:(id)arg1 bdpLog:(id)arg2 customParams:(id)arg3;
- (id)appIDFromSchema:(id)arg0;
- (id)timorSchemaCodecWithSchema:(id)arg0 appendLog:(id)arg1;
- (id)timorSchemaCodecWithSchema:(id)arg0 externalParams:(id)arg1;
- (void)preloadIronManWithSchemaString:(id)arg0;
- (id)getDeviceName;

@end