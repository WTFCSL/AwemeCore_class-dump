//
//     Generated by private class-dump
//

@class NSDictionary, BDPInnerDynamicPluginFileStorage;

@interface BDPDynamicPluginFileStorage : NSObject {
    BDPInnerDynamicPluginFileStorage *_innerStorage;
}

@property (retain, nonatomic) BDPInnerDynamicPluginFileStorage *innerStorage;
@property (readonly, copy, nonatomic) NSDictionary *innerDynamicPluginInfos;

- (id)innerStorage;
- (void)setInnerStorage:(id)arg0;
- (id)updatedPluginPathForName:(id)arg0 version:(id)arg1 md5:(id)arg2;
- (id)innerDynamicPluginInfos;
- (void)removeDynamicPluginFileForName:(id)arg0 version:(id)arg1 md5:(id)arg2;
- (id)init;
- (void).cxx_destruct;

@end
