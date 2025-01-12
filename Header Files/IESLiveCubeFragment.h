//
//     Generated by private class-dump
//

@class NSString, NSMapTable, NSMutableArray;

@interface IESLiveCubeFragment : IESLiveRoomComponent <IESLiveCubeProvider> {
    NSMapTable *_registrants;
    NSMutableArray *_controllers;
}

@property (retain, nonatomic) NSMapTable *registrants;
@property (retain, nonatomic) NSMutableArray *controllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectWithProtocol:(id)arg0;
- (void)componentCreate;
- (void)componentMount;
- (void)cubeComponentCreate;
- (id)controllers;
- (void)addController:(id)arg0;
- (void).cxx_destruct;
- (void)useObject:(id)arg0 forProtocol:(id)arg1;
- (id)registrants;
- (void)setRegistrants:(id)arg0;
- (void)setControllers:(id)arg0;

@end
