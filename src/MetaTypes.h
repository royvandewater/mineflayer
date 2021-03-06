#ifndef METATYPES_H
#define METATYPES_H

#include "Server.h"
#include "Vector3D.h"
#include "Game.h"

#include <QMetaType>
#include <QAbstractSocket>

namespace MetaTypes {
    void registerMetaTypes() {
        qRegisterMetaType<QSharedPointer<IncomingResponse> >("QSharedPointer<IncomingResponse>");
        qRegisterMetaType<QSharedPointer<OutgoingRequest> >("QSharedPointer<OutgoingRequest>");
        qRegisterMetaType<QSharedPointer<Chunk> >("QSharedPointer<Chunk>");
        qRegisterMetaType<Server::LoginStatus>("Server::LoginStatus");
        qRegisterMetaType<QAbstractSocket::SocketError>("QAbstractSocket::SocketError");
        qRegisterMetaType<Server::EntityPosition>("Server::EntityPosition");
        qRegisterMetaType<Int3D>("Int3D");
        qRegisterMetaType<Block>("Block");
        qRegisterMetaType<QHash<Int3D,Block> >("QHash<Int3D,Block>");
        qRegisterMetaType<MobSpawnResponse::MobType>("MobSpawnResponse::MobType");
        qRegisterMetaType<Item::ItemType>("Item::ItemType");
        qRegisterMetaType<Item>("Item");
        qRegisterMetaType<QSharedPointer<Game::Entity> >("QSharedPointer<Game::Entity>");
        qRegisterMetaType<Game::StoppedDiggingReason>("Game::StoppedDiggingReason");
        qRegisterMetaType<Message::AnimationType>("Message::AnimationType");
        qRegisterMetaType<Message::WindowType>("Message::WindowType");
        qRegisterMetaType<QVector<Item> >("QVector<Item>");
    }
}


#endif // METATYPES_H
