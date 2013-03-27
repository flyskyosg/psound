/*!
 * @file Source.inl
 * @author Rocco Martino
 */
/***************************************************************************
 *   Copyright (C) 2010 - 2012 by Rocco Martino                            *
 *   martinorocco@gmail.com                                                *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Lesser General Public License as        *
 *   published by the Free Software Foundation; either version 2.1 of the  *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Lesser General Public License for more details.                   *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef _PSOUND_SOURCE_INL
#define _PSOUND_SOURCE_INL

/* ======================================================================= */
/* ....................................................................... */
/* ....................................................................... */
/* ======================================================================= */




/* ======================================================================= */
/* ....................................................................... */
inline const pSound::Buffer*
pSound::Source::getBuffer(void) const
{
    return m_buffer.get() ;
}
/* ....................................................................... */
/* ======================================================================= */




/* ======================================================================= */
/* ....................................................................... */
inline pSound::Buffer*
pSound::Source::getBuffer(void)
{
    return m_buffer.get() ;
}
/* ....................................................................... */
/* ======================================================================= */




/* ======================================================================= */
/* ....................................................................... */
inline void
pSound::Source::setAutoPlay(bool flag)
{
    m_auto_play = flag ;
}
/* ....................................................................... */
/* ======================================================================= */




/* ======================================================================= */
/* ....................................................................... */
inline bool
pSound::Source::getAutoPlay(void) const
{
    return m_auto_play ;
}
/* ....................................................................... */
/* ======================================================================= */




/* ======================================================================= */
/* ....................................................................... */
inline void
pSound::Source::setPosition(const osg::Vec3& position)
{
    m_position = position ;
}
/* ....................................................................... */
/* ======================================================================= */




/* ======================================================================= */
/* ....................................................................... */
inline const osg::Vec3&
pSound::Source::getPosition(void) const
{
    return m_position ;
}
/* ....................................................................... */
/* ======================================================================= */




/* ======================================================================= */
/* ....................................................................... */
inline void
pSound::Source::setAutoComputeVelocity(bool flag)
{
    m_auto_compute_velocity = flag ;
}
/* ....................................................................... */
/* ======================================================================= */




/* ======================================================================= */
/* ....................................................................... */
inline bool
pSound::Source::getAutoComputeVelocity(void) const
{
    return m_auto_compute_velocity ;
}
/* ....................................................................... */
/* ======================================================================= */




/* ======================================================================= */
/* ....................................................................... */
inline void
pSound::Source::setVelocityMixingFactor( double factor )
{
    m_velocity_mixing_factor = factor ;
}
/* ....................................................................... */
/* ======================================================================= */




/* ======================================================================= */
/* ....................................................................... */
inline double
pSound::Source::getVelocityMixingFactor(void) const
{
    return m_velocity_mixing_factor ;
}
/* ....................................................................... */
/* ======================================================================= */




#endif /* _PSOUND_SOURCE_INL */
