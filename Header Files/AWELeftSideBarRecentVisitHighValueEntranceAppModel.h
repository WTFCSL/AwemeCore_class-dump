//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol AWEMicroAppEntranceContextProtocol;

@interface AWELeftSideBarRecentVisitHighValueEntranceAppModel : NSObject <AWELeftSideBarRecentVisitHighValueEntranceProtocol> {
    NSObject<AWEMicroAppEntranceContextProtocol> *_timorContext;
}

@property (retain, nonatomic) NSObject<AWEMicroAppEntranceContextProtocol> *timorContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTimorContext:(id)arg0;
- (id)timorContext;
- (void)updateWithParams:(id)arg0;
- (void)didShowed;
- (void)didClicked;
- (void).cxx_destruct;

@end
