//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEUGEvadeSceneServiceImpl : HTSService <AWEUGEvadeSceneService> {
    NSDictionary *_classSceneMap;
}

@property (copy, nonatomic) NSDictionary *classSceneMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classSceneMap;
- (void)setClassSceneMap:(id)arg0;
- (BOOL)checkIfInScene:(id)arg0 allowedSceneList:(id)arg1;
- (id)getCurrScene:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end