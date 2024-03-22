//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESLivePortalSenderLynxView : IESLivePortalLynxView <IESLivePluginLayoutViewAdapter> {
    long long _count;
    long long _newestPortalID;
    NSArray *_portals;
}

@property (retain, nonatomic) NSArray *portals;
@property (nonatomic) long long count;
@property (nonatomic) long long newestPortalID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)initWithPortals:(id)arg0;
- (void)updateWithPortals:(id)arg0;
- (long long)newestPortalID;
- (void)setPortals:(id)arg0;
- (id)getEnterCount:(id)arg0;
- (id)portals;
- (void)pr_updateWithCount:(long long)arg0;
- (void)pr_updatepersonCountLabelWithPortal:(id)arg0;
- (void)setNewestPortalID:(long long)arg0;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (long long)count;
- (id)viewType;

@end
